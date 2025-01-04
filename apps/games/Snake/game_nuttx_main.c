// #include <curses.h>
#include <stdlib.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <sys/types.h>
#include <fcntl.h>
// #include <nuttx/analog/ioctl.h>
#include <syslog.h>
#include <unistd.h>//文件操作
#include <string.h>
#include <pthread.h>
#include <sys/ioctl.h>
#include <nuttx/i2c/i2c_master.h>
#include <nuttx/input/gt9xx.h>
#include <nuttx/../sys/poll.h>

#include <nuttx/input/touchscreen.h>

#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <errno.h>
#include <unistd.h>
#include <nuttx/video/fb.h>
#include <nuttx/config.h>


#define  UP     1
#define  DOWN  -1
#define  LEFT   2
#define  RIGHT -2

/*蛇和食物的结构体*/
struct Snake
{
    int hang;
    int lie;
    struct Snake *next;
};

enum{
    KEY_UP,
    KEY_DOWN,
    KEY_LEFT,
    KEY_RIGHT,
    ALL_KEY
};

struct Snake *head = NULL;      //链表头
struct Snake *tail = NULL;        //链表尾
struct Snake food;              //食物
int key;                        //记录键盘输入值
int dir;                        //记录输入的方向键

struct touch_sample_s snake_testsample;
static int mytouch_fd = -1;
struct pollfd snake_poll_fds;

/****************************************************************************
 * Name: overlay_accl
 *
 * Description:
 *   Determines overlay acceleration support
 *
 * Parameters:
 *   fb        - Open framebuffer filehandle
 *   overlayno - Overlay number
 *   accl      - Acceleration to detect
 *
 * Return:
 *   OK    - Success
 *   ERROR - Failed
 ****************************************************************************/

static int overlay_accl(int fb, uint8_t overlayno, uint32_t accl)
{
  int ret;
  struct fb_overlayinfo_s oinfo;

  oinfo.overlay = overlayno;

  ret = ioctl(fb, FBIOGET_OVERLAYINFO, (unsigned long)((uintptr_t)&oinfo));
  if (ret != OK)
    {
      fprintf(stderr, "Unable to get overlay information\n");
      return -1;
    }

  printf("%s: %08" PRIx32 " %08" PRIx32 "\n", __func__, oinfo.accl, accl);
  return (oinfo.accl & accl) ? OK : -1;
}

/****************************************************************************
 * Name: overlay_color
 *
 * Description:
 *   Set overlay color
 *
 * Parameters:
 *   fb    - Open framebuffer filehandle
 *   oinfo - Overlay information
 *
 ****************************************************************************/

static int overlay_color(int fb, FAR struct fb_overlayinfo_s *oinfo)
{
  int ret;

  printf("Overlay: %d, set color: 0x%08" PRIx32 "\n",
         oinfo->overlay, oinfo->color);

  ret = overlay_accl(fb, oinfo->overlay, FB_ACCL_COLOR);
  if (ret != OK)
    {
      fprintf(stderr, "No hardware acceleration to set a color within the "
              "selected overlay area\n");
    }
  else
    {
#ifdef CONFIG_FB_SYNC
      ret = ioctl(fb, FBIO_WAITFORVSYNC, 0);
      if (ret != OK)
        {
          fprintf(stderr, "Unable to sync upon vertical line\n");
        }
#endif

      ret = ioctl(fb, FBIOSET_COLOR, (unsigned long)(uintptr_t)oinfo);
      if (ret != OK)
        {
          fprintf(stderr, "Unable to set overlay color\n");
        }
    }

  return ret;
}

static void usage(const char * progname)
{
  fprintf(stderr,
          "usage: %s <option> -d <fbdev>\n"
          "\n"
          "    -vinfo\n"
          "    -pinfo\n"
          "    -oinfo overlayno\n"
          "    -fill overlayno <color> <xpos> <ypos> <xres> <yres>\n"
          "      color: pixel format color\n"
          "      xpos: x-offset\n"
          "      ypos: y-offset\n"
          "      xres: x-resolution or area width\n"
          "      yres: y-resolution or area height\n"
#ifdef CONFIG_FB_CMAP
          "    -cmap <color1> <color2> <color3> <color4> <color5>\n"
          "      colors: 0xAARRGGBB\n"
          "      one color must be set at least\n"
#endif
          "    -color overlayno <value>\n"
          "      value: pixel format color\n"
          "    -chroma overlayno <value>\n"
          "      value: pixel format color\n"
          "    -transp overlayno <value> <mode>\n"
          "      value: 0-255\n"
          "      mode : %d = const alpha, %d = pixel alpha\n"
          "    -blank : <value>\n"
          "      0 : On\n"
          "      1 : Off\n"
          "    -area overlayno <xpos> <ypos> <xres> <yres>\n"
#ifdef CONFIG_FB_OVERLAY_BLIT
          "    -blit doverlayno <destxpos> <destypos> <destxres> "
          "<destyres>\n"
          "          soverlayno <srcxpos> <srcypos> <srcxres> <srcyres>\n"
          "    -blend doverlayno <dxpos> <dypos> <dxres> <dyres>\n"
          "           foverlayno <fxpos> <fypos> <fxres> <fyres>\n"
          "           boverlayno <bxpos> <bypos> <bxres> <byres>\n"
#endif
          "\n"
          "    -d <fbdev> optional, default: \"/dev/fb0\"\n",
          progname, FB_CONST_ALPHA, FB_PIXEL_ALPHA);
}

static int fbopen(const char * device)
{
  int fb = open(device, O_RDWR);

  if (fb < 0)
    {
      fprintf(stderr, "Unable to open framebuffer device: %s\n", device);
      return EXIT_FAILURE;
    }

  return fb;
}

///////////////////////////////////Snake/////////////////////////////////////////

/*输入横坐标和纵坐标值，判断是否存在蛇的链表节点*/
int hasSnakeNode(int i,int j)
{
    struct Snake *p;            //临时变量，用于记录蛇的链表表头
    p = head;

    while(p != NULL)            //当链表头不为空时，进入循环
    {
        if(p->hang == i && p->lie == j)
        {
            return 1;           //输入的行纵坐标存在于蛇的链表中时返回1
        }
        p = p->next;            //链表头指向下一个节点
    }
    return 0;                   //输入的横纵坐标不存在蛇的链表中时返回0
}

/*食物初始化*/
void initFoodnode()
{
    int x;                     //定义横坐标临时变量
    int y;                     //定义纵坐标临时变量
    x = rand()%20;             //在[0-20]范围内随机获取横坐标值
    y = rand()%20;             //在[0-20]范围内随机获取纵坐标值

    if(y == 0)
    {
        y = rand()%20;          //当纵坐标取值为0时，重新取值
    }

    food.hang = x;             //将前面获取到的横坐标赋值为食物的横坐标
    food.lie = y;               //将前面获取到的纵坐标复制为食物的纵坐标
}

/*输入横纵坐标判断是否存在食物，用于地图刷新*/
int hasFoodnode(int i,int j)
{
    if((food.hang == i)&&(food.lie == j))
    {
        return 1;               //当输入横纵坐标为食物的横纵坐标时，返回1
    }
    return 0;                   //当输入横纵坐标不是食物的横纵坐标时，返回0
}

/*地图绘制*/
void gamePic()
{
    int hang,lie;              //行列临时变量
    // move(0,0);                 //每次界面刷新都将界面光标移动到(0,0)的位置
    for(hang=0;hang<20;hang++) //历遍行
    {
        if(hang==0)
        {
            for(lie=0;lie<20;lie++)
            {
                // printw("--");  //判断为第0行时，绘制‘--’边界符号
            }
            // printw("\n");
        }
        if(hang>=0 || hang<=19)
        {
            for(lie=0;lie<=20;lie++)
            {
                if(lie==0 || lie==20)
                {
                    // printw("|");//第0和19列绘制‘|’边界符号
                }
                else if(hasSnakeNode(hang,lie))
                {
                    // printw("[]");//行列值满足蛇的节点坐标时，绘制‘[]’符号
                }
                else if(hasFoodnode(hang,lie))
                {
                    // printw("##");//行列之满足食物节点坐标时，绘制‘##’符号
                }
                else
                {
                    // printw("  ");//地图上空闲位置绘制‘  ’空格符号
                }
            }
            // printw("\n");        //每绘制完一行，该处添加一处换行符
        }
        if(hang==19)
        {
            for(lie=0;lie<20;lie++)
            {
                // printw("--");   //判断为第19行时，绘制‘--’边界符号
            }
            // printw("\n");
            // printw("By zhaokai\n");
            // printw("%d",key);
        }
    }
}

/*添加蛇身节点*/
void addNode()
{
    struct Snake *new;         //新节点变量
    new = (struct Snake *)malloc(sizeof(struct Snake));//为新节点开辟内存空间

    switch(dir)                //方向键判断
    {
        case UP:
            new->hang = tail->hang - 1;  //向上，行减1，上移
            new->lie = tail->lie;        //列保持
            break;
        case DOWN:
            new->hang = tail->hang + 1;  //向下，行加1，下移
            new->lie = tail->lie;        //列保持不变
            break;
        case LEFT:
            new->hang = tail->hang;      //行保持不变
            new->lie = tail->lie - 1;    //向左，列减1，左移
            break;
        case RIGHT:
            new->hang = tail->hang;      //行保持不变
            new->lie = tail->lie + 1;    //向右，列加1，右移
            break;
        default:
            break;

    }

    new->next = NULL;           //新节点的下一个节点指向为NULL
    tail->next = new;           //尾部的下一个节点指向新节点
    tail = new;                 //新节点复制给尾部节点
}

/*初始化蛇*/
void initSnake()
{
    struct Snake *p;            //临时变量，指向蛇的链表头
    dir = RIGHT;                //运动方向初始化为向右
    while(head != NULL)         //当链表头不为空时进入，用于释放蛇当前的链表占用内存空间
    {
        p = head;               //p指向链表头
        head = head->next;      //链表头指向下一个节点
        free(p);                //释放链表头内存
    }

    initFoodnode();             //初始化食物
    head = (struct Snake *)malloc(sizeof(struct Snake)); //为链表头开辟新的内存空间
    head->hang = 2;             //链表头行初始值为2
    head->lie = 2;              //链表头列初始值为2
    head->next = NULL;          //链表头的下一个节点指向为NULL
    tail = head;                //链表尾指向链表头

    addNode();                  //为链表添加新节点
    addNode();
    addNode();
    addNode();
}

/*节点删除*/
void deleteNode()
{
    struct Snake *p;            //创建临时节点
    p = head;                    //节点指向链表头
    head = head->next;          //链表头指向下一个节点
    free(p);                    //释放p的空间(原链表头)
}

/*判断蛇是否越界或自残*/
int ifSnakedie()
{
    struct Snake *p;            //创建临时节点
    p = head;                   //指向链表头

    if(tail->hang<0 | tail->lie==0 | tail->hang==20 | tail->lie==20)
    {
        return 1;               //当蛇链表的尾部坐标等于边界值时，返回1
    }

    while(p->next != NULL)
    {
        if((p->hang==tail->hang)&&(p->lie==tail->lie))
        {
            return 1;           //当蛇链表其它的节点与尾部节点坐标相同，返回1
        }
        p = p->next;
    }

    return 0;                   //无越界，无自残，返回0
}

/*蛇移动*/
void moveSnake()
{
    addNode();                  //添加新节点
    if(hasFoodnode(tail->hang,tail->lie))
    {
        initFoodnode();         //当蛇链表尾节点坐标值和食物坐标值一样，刷新食物位置
    }
    else
    {
        deleteNode();           //否则，删除蛇链表中的头节点
    }

    if(ifSnakedie())
    {
        initSnake();            //如果满足越界或者自残条件，重新初始化蛇链表
    }
}

/*地图界面刷新线程函数*/
void* refreshjiemian()
{
    printf("in %s :%d\n",__FILE__,__LINE__);
    // while(1)
    // {
    //     moveSnake();           //蛇链表移动
    //     gamePic();             //地图刷新
    //     // refresh();             //执行刷新
    //     usleep(150000);           //线程休眠函数，150ms
    // }
}

/*方向函数*/
void turn(int direction)
{
    if(abs(dir) != abs(direction))
    {
        dir = direction;        //方向取绝对值比较，当左右运动时只有上下输入才生效
    }
}

/*键盘方向输入监测线程函数*/
void* changeDir()
{
    while(1)
    {
        // key = getch();          //获取键盘输入
        key = 1;
        switch(key)
        {
            case KEY_UP:
                turn(UP);       //上
                break;
            case KEY_DOWN:
                turn(DOWN);     //下
                break;
            case KEY_LEFT:
                turn(LEFT);     //左
                break;
            case KEY_RIGHT:
                turn(RIGHT);    //右
                break;
            default:
                break;
        }
    }
}

// int main()
// {
//     pthread_t t1;               //创建线程变量t1
//     pthread_t t2;               //创建线程变量t2

//     // initscr();                  //Ncurses初始化
//     // keypad(stdscr,1);           //在std中接受键盘的功能键
//     // noecho();                   //控制键盘输入进来的字符

//     printf("in %s :%d\n",__FILE__,__LINE__);
//     initSnake();                //初始化蛇列表
//     gamePic();                  //地图初始化
//     printf("in %s :%d\n",__FILE__,__LINE__);

//     pthread_create(&t1,NULL,refreshjiemian,NULL);  //创建界面刷新线程
//     // pthread_create(&t2,NULL,changeDir,NULL);       //创建键盘方向输入监测线程

//     // getch();
//     // endwin();

//     return 0;
// }

int main(int argc, FAR char *argv[])
{

    pthread_t t1;               //创建线程变量t1
    pthread_t t2;               //创建线程变量t2

    // initscr();                  //Ncurses初始化
    // keypad(stdscr,1);           //在std中接受键盘的功能键
    // noecho();                   //控制键盘输入进来的字符

    printf("in %s :%d\n",__FILE__,__LINE__);
    initSnake();                //初始化蛇列表
    gamePic();                  //地图初始化
    printf("in %s :%d\n",__FILE__,__LINE__);

    pthread_create(&t1,NULL,refreshjiemian,NULL);  //创建界面刷新线程
    // pthread_create(&t2,NULL,changeDir,NULL);       //创建键盘方向输入监测线程

    // getch();
    // endwin();

    int ret;
    mytouch_fd = open("/dev/mytouch", O_RDWR);
    printf("mytouch_fd:%d\n",mytouch_fd);
    if(mytouch_fd > 0){
        printf("open mytouch success!\n");
    }

    char *fbdevice;
    int  fb = -1;

    fbdevice = "/dev/fb0";

    struct fb_overlayinfo_s oinfo;

    oinfo.overlay   = atoi(argv[1]);
    oinfo.color     = strtoul(argv[2], NULL, 16);

    fb = fbopen(fbdevice);
    if (fb >= 0)
    {
        overlay_color(fb, &oinfo);
    }

    snake_poll_fds.fd = mytouch_fd; 
    snake_poll_fds.events = POLLIN;
    
    printf("In %s:%d\n",__func__,__LINE__);


    while(1)
    {
        ret = poll(&snake_poll_fds,1,-1);
        if( ret > 0)
        {
            // printf("In %s: %d\n",__func__,__LINE__);
            read(mytouch_fd,&snake_testsample,sizeof(struct touch_sample_s));
            printf("npoints:%d\t x:%d y:%d\n",snake_testsample.npoints,snake_testsample.point->x,snake_testsample.point->y);
        }
    }
    return 0;
}
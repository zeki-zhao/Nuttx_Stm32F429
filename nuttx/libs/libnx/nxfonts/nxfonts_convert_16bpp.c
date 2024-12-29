typedef signed char _int8_t;
typedef unsigned char _uint8_t;
typedef signed short _int16_t;
typedef unsigned short _uint16_t;
typedef long int _int32_t;
typedef long unsigned int _uint32_t;
typedef signed long long _int64_t;
typedef unsigned long long _uint64_t;
typedef _int64_t _intmax_t;
typedef _uint64_t _uintmax_t;
typedef unsigned int _wchar_t;
typedef signed int _ssize_t;
typedef unsigned int _size_t;
typedef unsigned int irqstate_t;
typedef _int8_t int8_t;
typedef _uint8_t uint8_t;
typedef _int16_t int16_t;
typedef _uint16_t uint16_t;
typedef _int32_t int32_t;
typedef _uint32_t uint32_t;
typedef _int64_t int64_t;
typedef _uint64_t uint64_t;
typedef _int8_t int_least8_t;
typedef _uint8_t uint_least8_t;
typedef _int16_t int_least16_t;
typedef _uint16_t uint_least16_t;
typedef _int32_t int_least24_t;
typedef _uint32_t uint_least24_t;
typedef _int32_t int_least32_t;
typedef _uint32_t uint_least32_t;
typedef _int64_t int_least64_t;
typedef _uint64_t uint_least64_t;
typedef _int8_t int_fast8_t;
typedef _uint8_t uint_fast8_t;
typedef int int_fast16_t;
typedef unsigned int uint_fast16_t;
typedef _int32_t int_fast24_t;
typedef _uint32_t uint_fast24_t;
typedef _int32_t int_fast32_t;
typedef _uint32_t uint_fast32_t;
typedef _int64_t int_fast64_t;
typedef _uint64_t uint_fast64_t;
typedef _ssize_t intptr_t;
typedef _size_t uintptr_t;
typedef _intmax_t intmax_t;
typedef _uintmax_t uintmax_t;
typedef unsigned int mode_t;
typedef _size_t size_t;
typedef _ssize_t ssize_t;
typedef _size_t rsize_t;
typedef int16_t uid_t;
typedef int16_t gid_t;
typedef uint32_t dev_t;
typedef uint16_t ino_t;
typedef uint16_t nlink_t;
typedef int pid_t;
typedef int id_t;
typedef int32_t key_t;
typedef intptr_t ptrdiff_t;
typedef _wchar_t wchar_t;
typedef int wint_t;
typedef int wctype_t;
typedef uint32_t fsblkcnt_t;
typedef uint32_t fsfilcnt_t;
typedef uint32_t blkcnt_t;
typedef int32_t off_t;
typedef int32_t fpos_t;
typedef int16_t blksize_t;
typedef unsigned int socklen_t;
typedef uint16_t sa_family_t;
typedef uint32_t clock_t;
typedef uint32_t useconds_t;
typedef int32_t suseconds_t;
typedef volatile uint8_t cpu_set_t;
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;
typedef unsigned char unchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef signed char s_char;
typedef char *caddr_t;
typedef uint8_t u_int8_t;
typedef uint16_t u_int16_t;
typedef uint32_t u_int32_t;
typedef uint64_t u_int64_t;
struct fsid_s
{
  int val[2];
};
typedef int (*main_t)(int argc, char *argv[]);
enum
{
  ERROR = -1,
  OK = 0,
};
int nsh_main(int argc, char *argv[]);
typedef struct
{
  long long max_align_i;
  long double max_align_f;
} max_align_t;
typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;
void syslog(int priority, const char *fmt, ...) __attribute__((__format__(__printf__, 2, 3)));
void vsyslog(int priority, const char *fmt, va_list ap)
     __attribute__((__format__(__printf__, 2, 0)));
int setlogmask(int mask);
struct iovec
{
  void *iov_base;
  size_t iov_len;
};
ssize_t readv(int fildes, const struct iovec *iov, int iovcnt);
ssize_t writev(int fildes, const struct iovec *iov, int iovcnt);
ssize_t preadv(int fildes, const struct iovec *iov, int iovcnt,
               off_t offset);
ssize_t pwritev(int fildes, const struct iovec *iov, int iovcnt,
                off_t offset);
typedef void (*lib_dump_handler_t)( void *arg,
                                        const char *fmt, ...)
                  __attribute__((__format__(__printf__, 2, 3)));
void lib_dumphandler( const char *msg, const uint8_t *buffer,
                     unsigned int buflen, lib_dump_handler_t handler,
                     void *arg);
void lib_dumpvhandler( const char *msg, const struct iovec *iov,
                      int iovcnt, lib_dump_handler_t handler,
                      void *arg);
void lib_dumpbuffer( const char *msg, const uint8_t *buffer,
                    unsigned int buflen);
void lib_dumpvbuffer( const char *msg, const struct iovec *iov,
                     int iovcnt);
void lib_dumpfile(int fd, const char *msg, const uint8_t *buffer,
                  unsigned int buflen);
void lib_dumpvfile(int fd, const char *msg, const struct iovec *iov,
                   int iovcnt);
typedef int16_t b8_t;
typedef uint16_t ub8_t;
typedef int32_t b16_t;
typedef uint32_t ub16_t;
typedef int64_t b32_t;
typedef uint64_t ub32_t;
b16_t b16sin(b16_t rad);
b16_t b16cos(b16_t rad);
b16_t b16atan2(b16_t y, b16_t x);
ub16_t ub32sqrtub16(ub32_t a);
ub8_t ub16sqrtub8(ub16_t a);
struct winsize
{
  uint16_t ws_row;
  uint16_t ws_col;
  uint16_t ws_xpixel;
  uint16_t ws_ypixel;
};
struct serial_rs485
{
  uint32_t flags;
  uint32_t delay_rts_before_send;
  uint32_t delay_rts_after_send;
};
typedef uint16_t fb_coord_t;
struct fb_videoinfo_s
{
  uint8_t fmt;
  fb_coord_t xres;
  fb_coord_t yres;
  uint8_t nplanes;
  uint8_t noverlays;
};
struct fb_planeinfo_s
{
  void *fbmem;
  size_t fblen;
  fb_coord_t stride;
  uint8_t display;
  uint8_t bpp;
  uint32_t xres_virtual;
  uint32_t yres_virtual;
  uint32_t xoffset;
  uint32_t yoffset;
};
struct fb_area_s
{
  fb_coord_t x;
  fb_coord_t y;
  fb_coord_t w;
  fb_coord_t h;
};
struct fb_transp_s
{
  uint8_t transp;
  uint8_t transp_mode;
};
struct fb_overlayinfo_s
{
  void *fbmem;
  size_t fblen;
  fb_coord_t stride;
  uint8_t overlay;
  uint8_t bpp;
  uint8_t blank;
  uint32_t chromakey;
  uint32_t color;
  struct fb_transp_s transp;
  struct fb_area_s sarea;
  uint32_t accl;
};
struct fb_vtable_s
{
  int (*getvideoinfo)( struct fb_vtable_s *vtable,
                      struct fb_videoinfo_s *_none);
  int (*getplaneinfo)( struct fb_vtable_s *vtable, int planeno,
                      struct fb_planeinfo_s *pinfo);
  int (*open)( struct fb_vtable_s *vtable);
  int (*close)( struct fb_vtable_s *vtable);
  int (*updatearea)( struct fb_vtable_s *vtable,
                    const struct fb_area_s *area);
  int (*getoverlayinfo)( struct fb_vtable_s *vtable, int overlayno,
                        struct fb_overlayinfo_s *oinfo);
  int (*settransp)( struct fb_vtable_s *vtable,
                   const struct fb_overlayinfo_s *oinfo);
  int (*setchromakey)( struct fb_vtable_s *vtable,
                      const struct fb_overlayinfo_s *oinfo);
  int (*setcolor)( struct fb_vtable_s *vtable,
                  const struct fb_overlayinfo_s *oinfo);
  int (*setblank)( struct fb_vtable_s *vtable,
                  const struct fb_overlayinfo_s *oinfo);
  int (*setarea)( struct fb_vtable_s *vtable,
                 const struct fb_overlayinfo_s *oinfo);
  int (*pandisplay)( struct fb_vtable_s *vtable,
                    struct fb_planeinfo_s *pinfo);
  int (*setframerate)( struct fb_vtable_s *vtable, int rate);
  int (*getframerate)( struct fb_vtable_s *vtable);
  int (*getpower)( struct fb_vtable_s *vtable);
  int (*setpower)( struct fb_vtable_s *vtable, int power);
  int (*ioctl)( struct fb_vtable_s *vtable, int cmd, unsigned long arg);
  void *priv;
};
struct fb_fix_screeninfo
{
  char id[16];
  unsigned long smem_start;
  uint32_t smem_len;
  uint32_t type;
  uint32_t type_aux;
  uint32_t visual;
  uint16_t xpanstep;
  uint16_t ypanstep;
  uint16_t ywrapstep;
  uint32_t line_length;
  unsigned long mmio_start;
  uint32_t mmio_len;
  uint32_t accel;
  uint16_t capabilities;
  uint16_t reserved[2];
};
struct fb_bitfield
{
  uint32_t offset;
  uint32_t length;
  uint32_t msb_right;
};
struct fb_var_screeninfo
{
  uint32_t xres;
  uint32_t yres;
  uint32_t xres_virtual;
  uint32_t yres_virtual;
  uint32_t xoffset;
  uint32_t yoffset;
  uint32_t bits_per_pixel;
  uint32_t grayscale;
  struct fb_bitfield red;
  struct fb_bitfield green;
  struct fb_bitfield blue;
  struct fb_bitfield transp;
  uint32_t nonstd;
  uint32_t activate;
  uint32_t height;
  uint32_t width;
  uint32_t accel_flags;
  uint32_t pixclock;
  uint32_t left_margin;
  uint32_t right_margin;
  uint32_t upper_margin;
  uint32_t lower_margin;
  uint32_t hsync_len;
  uint32_t vsync_len;
  uint32_t sync;
  uint32_t vmode;
  uint32_t rotate;
  uint32_t colorspace;
  uint32_t reserved[4];
};
int up_fbinitialize(int display);
 struct fb_vtable_s *up_fbgetvplane(int display, int vplane);
void up_fbuninitialize(int display);
void fb_pollnotify( struct fb_vtable_s *vtable);
int fb_register(int display, int plane);
typedef uint16_t nxgl_mxpixel_t;
typedef int16_t nxgl_coord_t;
struct nxgl_point_s
{
  nxgl_coord_t x;
  nxgl_coord_t y;
};
struct nxgl_size_s
{
  nxgl_coord_t w;
  nxgl_coord_t h;
};
struct nxgl_rect_s
{
  struct nxgl_point_s pt1;
  struct nxgl_point_s pt2;
};
struct nxgl_vector_s
{
  struct nxgl_point_s pt1;
  struct nxgl_point_s pt2;
};
struct nxgl_run_s
{
  b16_t x1;
  b16_t x2;
  nxgl_coord_t y;
};
struct nxgl_trapezoid_s
{
  struct nxgl_run_s top;
  struct nxgl_run_s bot;
};
void nxgl_rgb2yuv(uint8_t r, uint8_t g, uint8_t b,
                  uint8_t *y, uint8_t *u, uint8_t *v);
void nxgl_yuv2rgb(uint8_t y, uint8_t u, uint8_t v,
                  uint8_t *r, uint8_t *g, uint8_t *b);
void nxgl_area2rect( struct nxgl_rect_s *dest,
                    const struct fb_area_s *src);
void nxgl_rect2area( struct fb_area_s *dest,
                    const struct nxgl_rect_s *src);
void nxgl_rectcopy( struct nxgl_rect_s *dest,
                   const struct nxgl_rect_s *src);
void nxgl_rectoffset( struct nxgl_rect_s *dest,
                     const struct nxgl_rect_s *src,
                     nxgl_coord_t dx, nxgl_coord_t dy);
void nxgl_vectoradd( struct nxgl_point_s *dest,
                    const struct nxgl_point_s *v1,
                    const struct nxgl_point_s *v2);
void nxgl_vectsubtract( struct nxgl_point_s *dest,
                       const struct nxgl_point_s *v1,
                       const struct nxgl_point_s *v2);
void nxgl_rectintersect( struct nxgl_rect_s *dest,
                        const struct nxgl_rect_s *src1,
                        const struct nxgl_rect_s *src2);
_Bool nxgl_intersecting( const struct nxgl_rect_s *rect1,
                       const struct nxgl_rect_s *rect2);
void nxgl_rectadd( struct nxgl_rect_s *dest,
                  const struct nxgl_rect_s *src1,
                  const struct nxgl_rect_s *src2);
void nxgl_rectunion( struct nxgl_rect_s *dest,
                    const struct nxgl_rect_s *src1,
                    const struct nxgl_rect_s *src2);
void nxgl_nonintersecting( struct nxgl_rect_s result[4],
                          const struct nxgl_rect_s *rect1,
                          const struct nxgl_rect_s *rect2);
_Bool nxgl_rectoverlap( struct nxgl_rect_s *rect1,
                      struct nxgl_rect_s *rect2);
_Bool nxgl_rectinside( const struct nxgl_rect_s *rect,
                     const struct nxgl_point_s *pt);
void nxgl_rectsize( struct nxgl_size_s *size,
                   const struct nxgl_rect_s *rect);
_Bool nxgl_nullrect( const struct nxgl_rect_s *rect);
void nxgl_runoffset( struct nxgl_run_s *dest,
                    const struct nxgl_run_s *src,
                    nxgl_coord_t dx, nxgl_coord_t dy);
void nxgl_runcopy( struct nxgl_run_s *dest,
                  const struct nxgl_run_s *src);
void nxgl_trapoffset( struct nxgl_trapezoid_s *dest,
                     const struct nxgl_trapezoid_s *src,
                     nxgl_coord_t dx, nxgl_coord_t dy);
void nxgl_trapcopy( struct nxgl_trapezoid_s *dest,
                   const struct nxgl_trapezoid_s *src);
int nxgl_splitline( struct nxgl_vector_s *vector,
                   struct nxgl_trapezoid_s *traps,
                   struct nxgl_rect_s *rect,
                   nxgl_coord_t linewidth);
void nxgl_circlepts( const struct nxgl_point_s *center,
                    nxgl_coord_t radius,
                    struct nxgl_point_s *circle);
void nxgl_circletraps( const struct nxgl_point_s *center,
                      nxgl_coord_t radius,
                      struct nxgl_trapezoid_s *circle);
uint32_t nxglib_rgb24_blend(uint32_t color1, uint32_t color2, ub16_t frac1);
uint16_t nxglib_rgb565_blend(uint16_t color1, uint16_t color2, ub16_t frac1);
typedef int (*vnc_mouseout_t)( void *arg, int16_t x,
                                   int16_t y, uint8_t buttons);
typedef int (*vnc_kbdout_t)( void *arg, uint8_t nch,
                                 const uint8_t *ch);
int vnc_fbinitialize(int display, vnc_kbdout_t kbdout,
                     vnc_mouseout_t mouseout, void *arg);
typedef void *NXHANDLE;
typedef void *NXWINDOW;
enum nx_event_e
{
  NXEVENT_BLOCKED = 0,
  NXEVENT_SYNCHED,
};
struct nx_callback_s
{
  void (*redraw)(NXWINDOW hwnd, const struct nxgl_rect_s *rect,
                 _Bool more, void *arg);
  void (*position)(NXWINDOW hwnd, const struct nxgl_size_s *size,
                   const struct nxgl_point_s *pos,
                   const struct nxgl_rect_s *bounds,
                   void *arg);
  void (*mousein)(NXWINDOW hwnd, const struct nxgl_point_s *pos,
                  uint8_t buttons, void *arg);
  void (*kbdin)(NXWINDOW hwnd, uint8_t nch,
                const uint8_t *ch, void *arg);
  void (*event)(NXWINDOW hwnd, enum nx_event_e event, void *arg1,
                void *arg2);
};
int nx_runinstance( const char *mqname, struct fb_vtable_s *dev);
NXHANDLE nx_connectinstance( const char *svrmqname);
void nx_disconnect(NXHANDLE handle);
int nx_eventhandler(NXHANDLE handle);
int nx_eventnotify(NXHANDLE handle, int signo);
NXWINDOW nx_openwindow(NXHANDLE handle, uint8_t flags,
                       const struct nx_callback_s *cb, void *arg);
int nx_closewindow(NXWINDOW hwnd);
int nx_block(NXWINDOW hwnd, void *arg);
int nx_synch(NXWINDOW hwnd, void *arg);
int nx_requestbkgd(NXHANDLE handle, const struct nx_callback_s *cb,
                   void *arg);
int nx_releasebkgd(NXWINDOW hwnd);
int nx_getposition(NXWINDOW hwnd);
int nx_setposition(NXWINDOW hwnd, const struct nxgl_point_s *pos);
int nx_setsize(NXWINDOW hwnd, const struct nxgl_size_s *size);
int nx_raise(NXWINDOW hwnd);
int nx_lower(NXWINDOW hwnd);
int nx_modal(NXWINDOW hwnd, _Bool modal);
int nx_setvisibility(NXWINDOW hwnd, _Bool hide);
_Bool nx_ishidden(NXWINDOW hwnd);
int nx_setpixel(NXWINDOW hwnd, const struct nxgl_point_s *pos,
                nxgl_mxpixel_t color[1]);
int nx_fill(NXWINDOW hwnd, const struct nxgl_rect_s *rect,
            nxgl_mxpixel_t color[1]);
int nx_getrectangle(NXWINDOW hwnd, const struct nxgl_rect_s *rect,
                    unsigned int plane, uint8_t *dest,
                    unsigned int deststride);
int nx_filltrapezoid(NXWINDOW hwnd, const struct nxgl_rect_s *clip,
                     const struct nxgl_trapezoid_s *trap,
                     nxgl_mxpixel_t color[1]);
int nx_drawline(NXWINDOW hwnd, struct nxgl_vector_s *vector,
                nxgl_coord_t width, nxgl_mxpixel_t color[1],
                uint8_t caps);
int nx_drawcircle(NXWINDOW hwnd, const struct nxgl_point_s *center,
                  nxgl_coord_t radius, nxgl_coord_t width,
                  nxgl_mxpixel_t color[1]);
int nx_fillcircle(NXWINDOW hwnd, const struct nxgl_point_s *center,
                  nxgl_coord_t radius,
                  nxgl_mxpixel_t color[1]);
int nx_setbgcolor(NXHANDLE handle, nxgl_mxpixel_t color[1]);
int nx_move(NXWINDOW hwnd, const struct nxgl_rect_s *rect,
            const struct nxgl_point_s *offset);
int nx_bitmap(NXWINDOW hwnd, const struct nxgl_rect_s *dest,
              const void *src[1],
              const struct nxgl_point_s *origin, unsigned int stride);
int nx_kbdchin(NXHANDLE handle, uint8_t ch);
int nx_kbdin(NXHANDLE handle, uint8_t nch, const uint8_t *ch);
int nx_mousein(NXHANDLE handle, nxgl_coord_t x,
               nxgl_coord_t y, uint8_t buttons);
void nx_redrawreq(NXWINDOW hwnd, const struct nxgl_rect_s *rect);
int nx_constructwindow(NXHANDLE handle, NXWINDOW hwnd, uint8_t flags,
                       const struct nx_callback_s *cb, void *arg);
enum nx_fontid_e
{
  FONTID_DEFAULT = 0
  , FONTID_X11_MISC_FIXED_9X15B = 39
};
struct nx_fontmetric_s
{
  uint32_t stride : 3;
  uint32_t width : 6;
  uint32_t height : 6;
  uint32_t xoffset : 6;
  uint32_t yoffset : 6;
  uint32_t unused : 5;
};
struct nx_fontbitmap_s
{
  struct nx_fontmetric_s metric;
  const uint8_t *bitmap;
};
struct nx_fontset_s
{
  uint8_t first;
  uint8_t nchars;
  const struct nx_fontbitmap_s *bitmap;
};
struct nx_font_s
{
  uint8_t mxheight;
  uint8_t mxwidth;
  uint8_t mxbits;
  uint8_t spwidth;
};
struct nx_fontpackage_s
{
  uint8_t id;
  const struct nx_font_s metrics;
  const struct nx_fontset_s font7;
};
typedef void *FCACHE;
struct nxfonts_glyph_s
{
  struct nxfonts_glyph_s *flink;
  uint8_t code;
  uint8_t height;
  uint8_t width;
  uint8_t stride;
  uint8_t bitmap[1];
};
NXHANDLE nxf_getfonthandle(enum nx_fontid_e fontid);
 const struct nx_font_s *nxf_getfontset(NXHANDLE handle);
 const struct nx_fontbitmap_s *nxf_getbitmap(NXHANDLE handle,
                                                uint16_t ch);
int nxf_convert_1bpp( uint8_t *dest, uint16_t height,
                     uint16_t width, uint16_t stride,
                     const struct nx_fontbitmap_s *bm,
                     nxgl_mxpixel_t color);
int nxf_convert_2bpp( uint8_t *dest, uint16_t height,
                     uint16_t width, uint16_t stride,
                     const struct nx_fontbitmap_s *bm,
                     nxgl_mxpixel_t color);
int nxf_convert_4bpp( uint8_t *dest, uint16_t height,
                     uint16_t width, uint16_t stride,
                     const struct nx_fontbitmap_s *bm,
                     nxgl_mxpixel_t color);
int nxf_convert_8bpp( uint8_t *dest, uint16_t height,
                     uint16_t width, uint16_t stride,
                     const struct nx_fontbitmap_s *bm,
                     nxgl_mxpixel_t color);
int nxf_convert_16bpp( uint16_t *dest, uint16_t height,
                      uint16_t width, uint16_t stride,
                      const struct nx_fontbitmap_s *bm,
                      nxgl_mxpixel_t color);
int nxf_convert_24bpp( uint32_t *dest, uint16_t height,
                      uint16_t width, uint16_t stride,
                      const struct nx_fontbitmap_s *bm,
                      nxgl_mxpixel_t color);
int nxf_convert_32bpp( uint32_t *dest, uint16_t height,
                      uint16_t width, uint16_t stride,
                      const struct nx_fontbitmap_s *bm,
                      nxgl_mxpixel_t color);
FCACHE nxf_cache_connect(enum nx_fontid_e fontid,
                         nxgl_mxpixel_t fgcolor, nxgl_mxpixel_t bgcolor,
                         int bpp, int maxglyph);
void nxf_cache_disconnect(FCACHE fhandle);
NXHANDLE nxf_cache_getfonthandle(FCACHE fhandle);
 const struct nxfonts_glyph_s *nxf_cache_getglyph(FCACHE fhandle,
                                                     uint8_t ch);
extern struct nx_fontset_s g_7bitfonts;
extern struct nx_font_s g_fonts;
int nxf_convert_16bpp
( uint16_t *dest, uint16_t height, uint16_t width, uint16_t stride,
  const struct nx_fontbitmap_s *bm, nxgl_mxpixel_t color)
{
  uint8_t *line;
  uint16_t *dptr;
  const uint8_t *sptr;
  uint8_t bmbyte;
  int bmbit;
  int row;
  int col;
  int bmndx;
  line = (uint8_t *)dest + bm->metric.yoffset * stride +
          ((bm->metric.xoffset) << 1);
  height = ((bm->metric.height) < (height - bm->metric.yoffset) ? (bm->metric.height) : (height - bm->metric.yoffset));
  width = ((bm->metric.width) < (width - bm->metric.xoffset) ? (bm->metric.width) : (width - bm->metric.xoffset));
  sptr = bm->bitmap;
  for (row = 0; row < height; row++)
    {
      col = 0;
      dptr = ( uint16_t *)line;
      for (bmndx = 0; bmndx < bm->metric.stride && col < width; bmndx++)
        {
          bmbyte = *sptr++;
          for (bmbit = 7; bmbit >= 0 && col < width; bmbit--, col++)
            {
              if (bmbyte & (1 << bmbit))
                {
                  *dptr++ = color;
                }
              else
                {
                  dptr++;
                }
            }
        }
      line += stride;
    }
  return OK;
}
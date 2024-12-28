/* config.h -- Autogenerated! Do not edit. */

#ifndef __INCLUDE_NUTTX_CONFIG_H
#define __INCLUDE_NUTTX_CONFIG_H

/* Used to represent the values of tristate options */

#define CONFIG_y 1
#define CONFIG_m 2

/* General Definitions ***********************************/
#define CONFIG_ALLOW_BSD_COMPONENTS 1
#define CONFIG_HOST_LINUX 1
#define CONFIG_APPS_DIR "../apps"
#define CONFIG_BASE_DEFCONFIG "mystm32f429IGT6:myconfig-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty-dirty"
#define CONFIG_BUILD_FLAT 1
#define CONFIG_INTELHEX_BINARY 1
#define CONFIG_RAW_BINARY 1
#define CONFIG_ARCH_HAVE_STDARG_H 1
#define CONFIG_ARCH_HAVE_SETJMP 1
#define CONFIG_ARCH_NONE_DEBUG_H 1
#define CONFIG_FORTIFY_SOURCE 0
#define CONFIG_NDEBUG 1
#define CONFIG_DEBUG_ALERT 1
#define CONFIG_DEBUG_FEATURES 1
#define CONFIG_DEBUG_ERROR 1
#define CONFIG_DEBUG_WARN 1
#define CONFIG_DEBUG_INFO 1
#define CONFIG_DEBUG_SCHED 1
#define CONFIG_DEBUG_LCD 1
#define CONFIG_DEBUG_LCD_ERROR 1
#define CONFIG_ARCH_HAVE_STACKCHECK 1
#define CONFIG_ARCH_HAVE_HEAPCHECK 1
#define CONFIG_DEBUG_SYMBOLS 1
#define CONFIG_ARCH_HAVE_CUSTOMOPT 1
#define CONFIG_DEBUG_NOOPT 1
#define CONFIG_DEBUG_OPT_UNUSED_SECTIONS 1
#define CONFIG_DEBUG_LINK_MAP 1
#define CONFIG_ARCH_ARM 1
#define CONFIG_ARCH "arm"
#define CONFIG_ARM_TOOLCHAIN_GNU_EABI 1
#define CONFIG_ARCH_CHIP_STM32 1
#define CONFIG_ARCH_ARMV7M 1
#define CONFIG_ARCH_CORTEXM4 1
#define CONFIG_ARCH_FAMILY "armv7-m"
#define CONFIG_ARCH_CHIP "stm32"
#define CONFIG_ARM_THUMB 1
#define CONFIG_ARM_HAVE_MPU_UNIFIED 1
#define CONFIG_ARCH_HAVE_HARDFAULT_DEBUG 1
#define CONFIG_ARCH_HAVE_MEMFAULT_DEBUG 1
#define CONFIG_ARCH_HAVE_BUSFAULT_DEBUG 1
#define CONFIG_ARCH_HAVE_USAGEFAULT_DEBUG 1
#define CONFIG_ARMV7M_HAVE_STACKCHECK 1
#define CONFIG_ARCH_CHIP_STM32F429I 1
#define CONFIG_STM32_FLASH_CONFIG_G 1
#define CONFIG_STM32_STM32F4XXX 1
#define CONFIG_STM32_STM32F429 1
#define CONFIG_STM32_HAVE_FLASH_ICACHE 1
#define CONFIG_STM32_HAVE_FLASH_DCACHE 1
#define CONFIG_STM32_HAVE_OVERDRIVE 1
#define CONFIG_STM32_HAVE_CRYP 1
#define CONFIG_STM32_HAVE_CCM 1
#define CONFIG_STM32_HAVE_OTGFS 1
#define CONFIG_STM32_HAVE_FMC 1
#define CONFIG_STM32_HAVE_IOCOMPENSATION 1
#define CONFIG_STM32_HAVE_LTDC 1
#define CONFIG_STM32_HAVE_USART3 1
#define CONFIG_STM32_HAVE_UART4 1
#define CONFIG_STM32_HAVE_UART5 1
#define CONFIG_STM32_HAVE_USART6 1
#define CONFIG_STM32_HAVE_UART7 1
#define CONFIG_STM32_HAVE_UART8 1
#define CONFIG_STM32_HAVE_TIM1 1
#define CONFIG_STM32_HAVE_TIM3 1
#define CONFIG_STM32_HAVE_TIM4 1
#define CONFIG_STM32_HAVE_TIM5 1
#define CONFIG_STM32_HAVE_TIM6 1
#define CONFIG_STM32_HAVE_TIM7 1
#define CONFIG_STM32_HAVE_TIM8 1
#define CONFIG_STM32_HAVE_TIM9 1
#define CONFIG_STM32_HAVE_TIM10 1
#define CONFIG_STM32_HAVE_TIM11 1
#define CONFIG_STM32_HAVE_TIM12 1
#define CONFIG_STM32_HAVE_TIM13 1
#define CONFIG_STM32_HAVE_TIM14 1
#define CONFIG_STM32_HAVE_ADC1 1
#define CONFIG_STM32_HAVE_ADC2 1
#define CONFIG_STM32_HAVE_ADC3 1
#define CONFIG_STM32_HAVE_CAN1 1
#define CONFIG_STM32_HAVE_CAN2 1
#define CONFIG_STM32_HAVE_DAC1 1
#define CONFIG_STM32_HAVE_RNG 1
#define CONFIG_STM32_HAVE_ETHMAC 1
#define CONFIG_STM32_HAVE_I2C2 1
#define CONFIG_STM32_HAVE_I2C3 1
#define CONFIG_STM32_HAVE_SPI2 1
#define CONFIG_STM32_HAVE_SPI3 1
#define CONFIG_STM32_HAVE_I2S3 1
#define CONFIG_STM32_HAVE_SPI4 1
#define CONFIG_STM32_HAVE_SPI5 1
#define CONFIG_STM32_HAVE_SPI6 1
#define CONFIG_STM32_HAVE_IP_DBGMCU_V2 1
#define CONFIG_STM32_HAVE_IP_I2C_V1 1
#define CONFIG_STM32_HAVE_IP_DMA_V2 1
#define CONFIG_STM32_HAVE_IP_TIMERS_V1 1
#define CONFIG_STM32_HAVE_IP_ADC_V1 1
#define CONFIG_STM32_HAVE_IP_DAC_V1 1
#define CONFIG_STM32_FMC 1
#define CONFIG_STM32_I2C2 1
#define CONFIG_STM32_LTDC 1
#define CONFIG_STM32_DMA2D 1
#define CONFIG_STM32_PWR 1
#define CONFIG_STM32_SYSCFG 1
#define CONFIG_STM32_USART1 1
#define CONFIG_STM32_USART2 1
#define CONFIG_STM32_USART3 1
#define CONFIG_STM32_I2C 1
#define CONFIG_STM32_USE_LEGACY_PINMAP 1
#define CONFIG_STM32_FLASH_ICACHE 1
#define CONFIG_STM32_FLASH_DCACHE 1
#define CONFIG_STM32_JTAG_SW_ENABLE 1
#define CONFIG_STM32_DISABLE_IDLE_SLEEP_DURING_DEBUG 1
#define CONFIG_STM32_USART 1
#define CONFIG_STM32_SERIALDRIVER 1
#define CONFIG_STM32_USART1_SERIALDRIVER 1
#define CONFIG_STM32_USART2_SERIALDRIVER 1
#define CONFIG_STM32_USART3_SERIALDRIVER 1
#define CONFIG_STM32_I2CTIMEOSEC 1
#define CONFIG_STM32_I2CTIMEOMS 500
#define CONFIG_STM32_I2CTIMEOTICKS 500
#define CONFIG_STM32_LTDC_BACKLIGHT 1
#define CONFIG_STM32_LTDC_DEFBACKLIGHT 0xFF
#define CONFIG_STM32_LTDC_BACKCOLOR 0x0
#define CONFIG_STM32_LTDC_DITHER 1
#define CONFIG_STM32_LTDC_DITHER_RED 2
#define CONFIG_STM32_LTDC_DITHER_GREEN 2
#define CONFIG_STM32_LTDC_DITHER_BLUE 2
#define CONFIG_STM32_LTDC_FB_BASE 0xD0000000
#define CONFIG_STM32_LTDC_FB_SIZE 8388608
#define CONFIG_STM32_LTDC_L1_CHROMAKEY 0x00000000
#define CONFIG_STM32_LTDC_L1_COLOR 0x00000000
#define CONFIG_STM32_LTDC_L1_RGB565 1
#define CONFIG_STM32_LTDC_L2 1
#define CONFIG_STM32_LTDC_L2_COLOR 0x00000000
#define CONFIG_STM32_LTDC_L2_CHROMAKEY 0x00000000
#define CONFIG_STM32_LTDC_L2_RGB565 1
#define CONFIG_STM32_DMA2D_NLAYERS 2
#define CONFIG_STM32_DMA2D_LAYER_PPLINE 800
#define CONFIG_STM32_DMA2D_FB_BASE 0xD0000000
#define CONFIG_STM32_DMA2D_FB_SIZE 768000
#define CONFIG_STM32_DMA2D_RGB565 1
#define CONFIG_STM32_DMA2D_REGDEBUG 1
#define CONFIG_ARCH_BOARD "mystm32f429IGT6"
#define CONFIG_ARCH_TOOLCHAIN_GNU 1
#define CONFIG_LTO_NONE 1
#define CONFIG_ARCH_HAVE_IRQTRIGGER 1
#define CONFIG_ARCH_HAVE_IRQPRIO 1
#define CONFIG_ARCH_HAVE_VFORK 1
#define CONFIG_ARCH_HAVE_FPU 1
#define CONFIG_ARCH_HAVE_MPU 1
#define CONFIG_ARCH_HAVE_PROGMEM 1
#define CONFIG_ARCH_HAVE_RESET 1
#define CONFIG_ARCH_HAVE_TESTSET 1
#define CONFIG_ARCH_HAVE_THREAD_LOCAL 1
#define CONFIG_ARCH_HAVE_FETCHADD 1
#define CONFIG_ARCH_HAVE_SYSCALL_HOOKS 1
#define CONFIG_ARCH_HAVE_BACKTRACE 1
#define CONFIG_ARCH_HAVE_CPUINFO 1
#define CONFIG_ARCH_STACKDUMP 1
#define CONFIG_ARCH_STACKDUMP_MAX_LENGTH 0
#define CONFIG_ARCH_HAVE_RAMVECTORS 1
#define CONFIG_BOARD_LOOPSPERMSEC 16717
#define CONFIG_ARCH_HAVE_INTERRUPTSTACK 1
#define CONFIG_ARCH_INTERRUPTSTACK 0
#define CONFIG_ARCH_HAVE_HIPRI_INTERRUPT 1
#define CONFIG_BOOT_RUNFROMFLASH 1
#define CONFIG_RAM_START 0x20000000
#define CONFIG_RAM_SIZE 114688
#define CONFIG_ARCH_BOARD_MY_STM32F429I_DISCO 1
#define CONFIG_ARCH_HAVE_LEDS 1
#define CONFIG_ARCH_LEDS 1
#define CONFIG_ARCH_HAVE_BUTTONS 1
#define CONFIG_ARCH_BUTTONS 1
#define CONFIG_ARCH_HAVE_IRQBUTTONS 1
#define CONFIG_BOARDCTL 1
#define CONFIG_BOARDCTL_MKRD 1
#define CONFIG_ARCH_HAVE_TICKLESS 1
#define CONFIG_USEC_PER_TICK 10000
#define CONFIG_ARCH_HAVE_TIMEKEEPING 1
#define CONFIG_START_YEAR 2011
#define CONFIG_START_MONTH 12
#define CONFIG_START_DAY 6
#define CONFIG_PREALLOC_TIMERS 4
#define CONFIG_INIT_ENTRY 1
#undef CONFIG_INIT_ARGS
#define CONFIG_INIT_STACKSIZE 2048
#define CONFIG_INIT_PRIORITY 100
#define CONFIG_INIT_ENTRYPOINT nsh_main
#define CONFIG_INIT_ENTRYNAME "nsh_main"
#define CONFIG_RR_INTERVAL 200
#define CONFIG_TASK_NAME_SIZE 0
#define CONFIG_SCHED_WAITPID 1
#define CONFIG_PTHREAD_MUTEX_TYPES 1
#define CONFIG_PTHREAD_MUTEX_ROBUST 1
#define CONFIG_PTHREAD_MUTEX_DEFAULT_PRIO_NONE 1
#define CONFIG_PTHREAD_CLEANUP_STACKSIZE 2
#define CONFIG_DEV_CONSOLE 1
#define CONFIG_NFILE_DESCRIPTORS_PER_BLOCK 8
#define CONFIG_FILE_STREAM 1
#define CONFIG_NAME_MAX 32
#define CONFIG_PATH_MAX 256
#define CONFIG_SIG_PREALLOC_IRQ_ACTIONS 8
#define CONFIG_SIG_DEFAULT 1
#define CONFIG_SIG_SIGKILL_ACTION 1
#define CONFIG_SIG_SIGSTOP_ACTION 1
#define CONFIG_PREALLOC_MQ_MSGS 8
#define CONFIG_PREALLOC_MQ_IRQ_MSGS 8
#define CONFIG_MQ_MAXMSGSIZE 70
#define CONFIG_DEFAULT_TASK_STACKSIZE 2048
#define CONFIG_IDLETHREAD_STACKSIZE 1024
#define CONFIG_PTHREAD_STACK_MIN 256
#define CONFIG_PTHREAD_STACK_DEFAULT 2048
#define CONFIG_ARCH_HAVE_I2CRESET 1
#define CONFIG_I2C 1
#define CONFIG_I2C_RESET 1
#define CONFIG_I2C_DRIVER 1
#define CONFIG_ARCH_HAVE_SPI_BITORDER 1
#define CONFIG_SPI 1
#define CONFIG_SPI_EXCHANGE 1
#define CONFIG_FB_UPDATE 1
#define CONFIG_FB_OVERLAY 1
#define CONFIG_DRIVERS_VIDEO 1
#define CONFIG_VIDEO_FB 1
#define CONFIG_INPUT 1
#define CONFIG_INPUT_TOUCHSCREEN 1
#define CONFIG_INPUT_UINPUT 1
#define CONFIG_UINPUT_TOUCH 1
#define CONFIG_UINPUT_TOUCH_MAXPOINT 1
#define CONFIG_UINPUT_TOUCH_BUFNUMBER 8
#define CONFIG_INPUT_GT9XX 1
#define CONFIG_INPUT_GT9XX_NPOLLWAITERS 1
#define CONFIG_INPUT_GT9XX_I2C_FREQUENCY 400000
#define CONFIG_LCD 1
#define CONFIG_LCD_PACKEDMSFIRST 1
#define CONFIG_LCD_DEV 1
#define CONFIG_LCD_FRAMEBUFFER 1
#define CONFIG_LCD_EXTERNINIT 1
#define CONFIG_LCD_MAXCONTRAST 63
#define CONFIG_LCD_MAXPOWER 1
#define CONFIG_LCD_LANDSCAPE 1
#define CONFIG_SLCD 1
#define CONFIG_SLCD_CONSOLE 1
#define CONFIG_DEV_NULL 1
#define CONFIG_DRVR_MKRD 1
#define CONFIG_ARCH_HAVE_RDWR_MEM_CPU_RUN 1
#define CONFIG_ARCH_HAVE_SERIAL_TERMIOS 1
#define CONFIG_SERIAL 1
#define CONFIG_SERIAL_CONSOLE 1
#define CONFIG_MCU_SERIAL 1
#define CONFIG_STANDARD_SERIAL 1
#define CONFIG_SERIAL_NPOLLWAITERS 4
#define CONFIG_SERIAL_TERMIOS 1
#define CONFIG_TTY_SIGINT 1
#define CONFIG_TTY_SIGINT_CHAR 0x03
#define CONFIG_USART1_SERIAL_CONSOLE 1
#define CONFIG_USART1_SERIALDRIVER 1
#define CONFIG_USART2_SERIALDRIVER 1
#define CONFIG_USART3_SERIALDRIVER 1
#define CONFIG_USART1_RXBUFSIZE 256
#define CONFIG_USART1_TXBUFSIZE 256
#define CONFIG_USART1_BAUD 115200
#define CONFIG_USART1_BITS 8
#define CONFIG_USART1_PARITY 0
#define CONFIG_USART1_2STOP 1
#define CONFIG_USART2_RXBUFSIZE 256
#define CONFIG_USART2_TXBUFSIZE 256
#define CONFIG_USART2_BAUD 115200
#define CONFIG_USART2_BITS 8
#define CONFIG_USART2_PARITY 0
#define CONFIG_USART2_2STOP 0
#define CONFIG_USART3_RXBUFSIZE 256
#define CONFIG_USART3_TXBUFSIZE 256
#define CONFIG_USART3_BAUD 115200
#define CONFIG_USART3_BITS 8
#define CONFIG_USART3_PARITY 0
#define CONFIG_USART3_2STOP 0
#define CONFIG_SYSLOG_MAX_CHANNELS 2
#define CONFIG_RAMLOG 1
#define CONFIG_RAMLOG_CRLF 1
#define CONFIG_RAMLOG_NONBLOCKING 1
#define CONFIG_RAMLOG_NPOLLWAITERS 4
#define CONFIG_RAMLOG_POLLTHRESHOLD 1
#define CONFIG_SYSLOG_BUFFER 1
#define CONFIG_SYSLOG_BUFSIZE 1024
#define CONFIG_SYSLOG_DEVPATH "/dev/kmsg"
#define CONFIG_RAMLOG_SYSLOG 1
#define CONFIG_RAMLOG_BUFFER_SECTION ""
#define CONFIG_RAMLOG_BUFSIZE 1024
#define CONFIG_SYSLOG_FILE 1
#define CONFIG_SYSLOG_FILE_ROTATIONS 0
#define CONFIG_MY_LED 1
#define CONFIG_MY_TOUCH 1
#define CONFIG_FS_NEPOLL_DESCRIPTORS 8
#define CONFIG_SENDFILE_BUFSIZE 512
#define CONFIG_FS_MQUEUE_VFS_PATH "/var/mqueue"
#define CONFIG_FS_MQUEUE_NPOLLWAITERS 4
#define CONFIG_FS_ANONMAP 1
#define CONFIG_FS_PROCFS 1
#define CONFIG_FS_PROCFS_MAX_TASKS 128
#define CONFIG_NX 1
#define CONFIG_NX_NDISPLAYS 1
#define CONFIG_NX_NPLANES 1
#define CONFIG_NX_RAMBACKED 1
#define CONFIG_NX_SWCURSOR 1
#define CONFIG_NX_BGCOLOR 0x0
#define CONFIG_NX_DISABLE_1BPP 1
#define CONFIG_NX_DISABLE_2BPP 1
#define CONFIG_NX_DISABLE_4BPP 1
#define CONFIG_NX_DISABLE_8BPP 1
#define CONFIG_NX_DISABLE_24BPP 1
#define CONFIG_NX_DISABLE_32BPP 1
#define CONFIG_NX_PACKEDMSFIRST 1
#define CONFIG_NX_XYINPUT 1
#define CONFIG_NX_XYINPUT_TOUCHSCREEN 1
#define CONFIG_NX_KBD 1
#define CONFIG_NXTK_BORDERWIDTH 4
#define CONFIG_NXTK_DEFAULT_BORDERCOLORS 1
#define CONFIG_NXTK_AUTORAISE 1
#define CONFIG_NXTERM 1
#define CONFIG_NXTERM_BPP 16
#define CONFIG_NXTERM_CURSORCHAR 95
#define CONFIG_NXTERM_MXCHARS 256
#define CONFIG_NXTERM_CACHESIZE 16
#define CONFIG_NXTERM_LINESEPARATION 0
#define CONFIG_NXTERM_NXKBDIN 1
#define CONFIG_NXTERM_KBDBUFSIZE 16
#define CONFIG_NXTERM_NPOLLWAITERS 8
#define CONFIG_NX_BLOCKING 1
#define CONFIG_NX_MXSERVERMSGS 32
#define CONFIG_NX_MXCLIENTMSGS 256
#define CONFIG_NXSTART_SERVERPRIO 200
#define CONFIG_NXSTART_SERVERSTACK 2048
#define CONFIG_NXFONTS 1
#define CONFIG_NXFONTS_CHARBITS 7
#define CONFIG_NXFONT_X11_MISC_FIXED_9X15B 1
#define CONFIG_NXFONTS_DISABLE_1BPP 1
#define CONFIG_NXFONTS_DISABLE_2BPP 1
#define CONFIG_NXFONTS_DISABLE_4BPP 1
#define CONFIG_NXFONTS_DISABLE_8BPP 1
#define CONFIG_NXFONTS_DISABLE_24BPP 1
#define CONFIG_NXFONTS_DISABLE_32BPP 1
#define CONFIG_NXFONTS_PACKEDMSFIRST 1
#define CONFIG_NXGLIB 1
#define CONFIG_MM_DEFAULT_MANAGER 1
#define CONFIG_MM_DFAULT_ALIGNMENT 0
#define CONFIG_MM_REGIONS 2
#define CONFIG_MM_HEAP_MEMPOOL_THRESHOLD 0
#define CONFIG_MM_BACKTRACE -1
#define CONFIG_STDIO_BUFFER_SIZE 64
#define CONFIG_STDIO_LINEBUFFER 1
#define CONFIG_NUNGET_CHARS 2
#define CONFIG_LIBC_LONG_LONG 1
#define CONFIG_ARCH_LOWPUTC 1
#define CONFIG_LIBC_RAND_ORDER 1
#define CONFIG_LIBC_HOMEDIR "/"
#define CONFIG_LIBC_TMPDIR "/tmp"
#define CONFIG_LIBC_MAX_TMPFILE 32
#define CONFIG_LIBC_MAX_EXITFUNS 0
#define CONFIG_POSIX_SPAWN_DEFAULT_STACKSIZE 2048
#define CONFIG_LIBC_HOSTNAME ""
#define CONFIG_LIBC_OPEN_MAX 256
#define CONFIG_LIBC_STRERROR_ERRNUM 1
#define CONFIG_LIBC_STRSIGNAL 1
#define CONFIG_TLS_NELEM 4
#define CONFIG_TLS_TASK_NELEM 0
#define CONFIG_LIBC_GAISTRERROR_ERRNUM 1
#define CONFIG_LIBC_FTOK_VFS_PATH "/var/ftok"
#define CONFIG_LIBC_MEMFD_ERROR 1
#define CONFIG_BUILTIN 1
#define CONFIG_STREAM_OUT_BUFFER_SIZE 64
#define CONFIG_STREAM_HEXDUMP_BUFFER_SIZE 128
#define CONFIG_LIBM_TOOLCHAIN 1
#define CONFIG_HAVE_CXX 1
#define CONFIG_HAVE_CXXINITIALIZE 1
#define CONFIG_LIBCXXMINI 1
#define CONFIG_CXX_STANDARD "gnu++17"
#define CONFIG_EXAMPLES_FB 1
#define CONFIG_EXAMPLES_FB_DEFAULTFB "/dev/fb0"
#define CONFIG_EXAMPLES_FB_PROGNAME "fb"
#define CONFIG_EXAMPLES_FB_PRIORITY 100
#define CONFIG_EXAMPLES_FB_STACKSIZE 2048
#define CONFIG_EXAMPLES_FBOVERLAY 1
#define CONFIG_EXAMPLES_FBOVERLAY_PROGNAME "fboverlay"
#define CONFIG_EXAMPLES_FBOVERLAY_PRIORITY 100
#define CONFIG_EXAMPLES_FBOVERLAY_STACKSIZE 2048
#define CONFIG_EXAMPLES_HIDKBD 1
#define CONFIG_EXAMPLES_HIDKBD_PROGNAME "hidkbd"
#define CONFIG_EXAMPLES_HIDKBD_STACKSIZE 2048
#define CONFIG_EXAMPLES_HIDKBD_DEFPRIO 100
#define CONFIG_EXAMPLES_HIDKBD_DEVNAME "/dev/kbda"
#define CONFIG_EXAMPLES_MYLED 1
#define CONFIG_EXAMPLES_MYLED_PROGNAME "myled"
#define CONFIG_EXAMPLES_MYLED_PRIORITY 100
#define CONFIG_EXAMPLES_MYLED_STACKSIZE 2048
#define CONFIG_EXAMPLES_NXHELLO 1
#define CONFIG_EXAMPLES_NXHELLO_PROGNAME "nxhello"
#define CONFIG_EXAMPLES_NXHELLO_PRIORITY 100
#define CONFIG_EXAMPLES_NXHELLO_STACKSIZE 2048
#define CONFIG_EXAMPLES_NXHELLO_BPP 16
#define CONFIG_EXAMPLES_NXHELLO_DEFAULT_COLORS 1
#define CONFIG_EXAMPLES_NXHELLO_DEFAULT_FONT 1
#define CONFIG_EXAMPLES_NXHELLO_LISTENER_STACKSIZE 2048
#define CONFIG_EXAMPLES_NXHELLO_CLIENTPRIO 80
#define CONFIG_EXAMPLES_NXHELLO_SERVERPRIO 130
#define CONFIG_EXAMPLES_NXHELLO_LISTENERPRIO 100
#define CONFIG_EXAMPLES_NX 1
#define CONFIG_EXAMPLES_NX_DEFAULT_COLORS 1
#define CONFIG_EXAMPLES_NX_FONTID 11
#define CONFIG_EXAMPLES_NX_BPP 16
#define CONFIG_EXAMPLES_NX_TOOLBAR_HEIGHT 16
#define CONFIG_EXAMPLES_NX_STACKSIZE 2048
#define CONFIG_EXAMPLES_NX_CLIENTPRIO 80
#define CONFIG_EXAMPLES_NX_SERVERPRIO 200
#define CONFIG_EXAMPLES_NX_LISTENERPRIO 100
#define CONFIG_EXAMPLES_NXTERM 1
#define CONFIG_EXAMPLES_NXTERM_PROGNAME "nxterm"
#define CONFIG_EXAMPLES_NXTERM_PRIORITY 100
#define CONFIG_EXAMPLES_NXTERM_STACKSIZE 4096
#define CONFIG_EXAMPLES_NXTERM_LISTENERPRIO 80
#define CONFIG_EXAMPLES_NXTERM_CLIENTPRIO 100
#define CONFIG_EXAMPLES_NXTERM_SERVERPRIO 120
#define CONFIG_EXAMPLES_NXTERM_BPP 16
#define CONFIG_EXAMPLES_NXTERM_BGCOLOR 0x0000
#define CONFIG_EXAMPLES_NXTERM_WCOLOR 0x1f1c
#define CONFIG_EXAMPLES_NXTERM_TOOLBAR_HEIGHT 16
#define CONFIG_EXAMPLES_NXTERM_TBCOLOR 0xbdf7
#define CONFIG_EXAMPLES_NXTERM_FONTID 16
#define CONFIG_EXAMPLES_NXTERM_FONTCOLOR 0x0000
#define CONFIG_EXAMPLES_TEST 1
#define CONFIG_EXAMPLES_TEST_PROGNAME "Test"
#define CONFIG_EXAMPLES_TEST_PRIORITY 100
#define CONFIG_EXAMPLES_TEST_STACKSIZE 2048
#define CONFIG_EXAMPLES_MYI2C 1
#define CONFIG_EXAMPLES_MYI2C_PROGNAME "myi2c"
#define CONFIG_EXAMPLES_MYI2C_PRIORITY 100
#define CONFIG_EXAMPLES_MYI2C_STACKSIZE 2048
#define CONFIG_NSH_LIBRARY 1
#define CONFIG_NSH_PROMPT_STRING "nsh> "
#define CONFIG_NSH_READLINE 1
#define CONFIG_NSH_LINELEN 300
#define CONFIG_NSH_QUOTE 1
#define CONFIG_NSH_MAXARGUMENTS 7
#define CONFIG_NSH_ARGCAT 1
#define CONFIG_NSH_NESTDEPTH 3
#define CONFIG_NSH_ALIAS 1
#define CONFIG_NSH_ALIAS_MAX_AMOUNT 1
#define CONFIG_NSH_BUILTIN_APPS 1
#define CONFIG_NSH_DISABLE_DATE 1
#define CONFIG_NSH_DISABLE_LOSMART 1
#define CONFIG_NSH_DISABLE_LOMTD 1
#define CONFIG_NSH_DISABLE_MB 1
#define CONFIG_NSH_DISABLE_MH 1
#define CONFIG_NSH_DISABLE_MW 1
#define CONFIG_NSH_DISABLE_TIMEDATECTL 1
#define CONFIG_NSH_CODECS_BUFSIZE 300
#define CONFIG_NSH_CMDOPT_HEXDUMP 1
#define CONFIG_NSH_PROC_MOUNTPOINT "/proc"
#define CONFIG_NSH_FILEIOSIZE 512
#define CONFIG_NSH_CONSOLE 1
#define CONFIG_NSH_ARCHINIT 1
#define CONFIG_NSH_LOGIN 1
#define CONFIG_NSH_CONSOLE_LOGIN 1
#define CONFIG_NSH_LOGIN_FIXED 1
#define CONFIG_NSH_LOGIN_USERNAME "zeki"
#define CONFIG_NSH_LOGIN_PASSWORD ""
#define CONFIG_NSH_LOGIN_FAILDELAY 0
#define CONFIG_NSH_LOGIN_FAILCOUNT 3
#define CONFIG_SYSTEM_CLE 1
#define CONFIG_SYSTEM_CLE_CMD_HISTORY 1
#define CONFIG_SYSTEM_CLE_CMD_HISTORY_LINELEN 80
#define CONFIG_SYSTEM_CLE_CMD_HISTORY_LEN 16
#define CONFIG_SYSTEM_CLE_DEBUGLEVEL 0
#define CONFIG_SYSTEM_I2CTOOL 1
#define CONFIG_I2CTOOL_MINBUS 2
#define CONFIG_I2CTOOL_MAXBUS 2
#define CONFIG_I2CTOOL_MINADDR 0x03
#define CONFIG_I2CTOOL_MAXADDR 0x7f
#define CONFIG_I2CTOOL_MAXREGADDR 0xff
#define CONFIG_I2CTOOL_DEFFREQ 400000
#define CONFIG_SYSTEM_NSH 1
#define CONFIG_SYSTEM_NSH_PRIORITY 100
#define CONFIG_SYSTEM_NSH_STACKSIZE 2048
#define CONFIG_SYSTEM_NSH_PROGNAME "nsh"
#define CONFIG_SYSTEM_READLINE 1
#define CONFIG_READLINE_HAVE_EXTMATCH 1
#define CONFIG_READLINE_ECHO 1
#define CONFIG_READLINE_TABCOMPLETION 1
#define CONFIG_READLINE_MAX_BUILTINS 64
#define CONFIG_READLINE_MAX_EXTCMDS 64
#define CONFIG_READLINE_CMD_HISTORY 1
#define CONFIG_READLINE_CMD_HISTORY_LINELEN 80
#define CONFIG_READLINE_CMD_HISTORY_LEN 16
#define CONFIG_SYSTEM_SYSTEM 1
#define CONFIG_SYSTEM_SYSTEM_STACKSIZE 2048
#define CONFIG_SYSTEM_SYSTEM_PRIORITY 100

/* Sanity Checks *****************************************/

/* If the end of RAM is not specified then it is assumed to be
 * the beginning of RAM plus the RAM size.
 */

#ifndef CONFIG_RAM_END
#  define CONFIG_RAM_END (CONFIG_RAM_START+CONFIG_RAM_SIZE)
#endif

#ifndef CONFIG_RAM_VEND
#  define CONFIG_RAM_VEND (CONFIG_RAM_VSTART+CONFIG_RAM_SIZE)
#endif

/* If the end of FLASH is not specified then it is assumed to be
 * the beginning of FLASH plus the FLASH size.
 */

#ifndef CONFIG_FLASH_END
#  define CONFIG_FLASH_END (CONFIG_FLASH_START+CONFIG_FLASH_SIZE)
#endif

#endif /* __INCLUDE_NUTTX_CONFIG_H */

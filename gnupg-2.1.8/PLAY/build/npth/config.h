/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define to 1 if you have the `clock_gettime' function. */
#define HAVE_CLOCK_GETTIME 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `pselect' function. */
#define HAVE_PSELECT 1

/* Define if we have pthread. */
#define HAVE_PTHREAD 1

/* Define to 1 if you have the `pthread_atfork' function. */
#define HAVE_PTHREAD_ATFORK 1

/* Define to 1 if you have the `pthread_getname_np' function. */
#define HAVE_PTHREAD_GETNAME_NP 1

/* Define to 1 if you have the `pthread_mutex_timedlock' function. */
#define HAVE_PTHREAD_MUTEX_TIMEDLOCK 1

/* Define to 1 if you have the `pthread_rwlock_rdlock' function. */
#define HAVE_PTHREAD_RWLOCK_RDLOCK 1

/* Define to 1 if you have the `pthread_rwlock_timedrdlock' function. */
#define HAVE_PTHREAD_RWLOCK_TIMEDRDLOCK 1

/* Define to 1 if you have the `pthread_rwlock_timedwrlock' function. */
#define HAVE_PTHREAD_RWLOCK_TIMEDWRLOCK 1

/* Define to 1 if you have the `pthread_rwlock_tryrdlock' function. */
#define HAVE_PTHREAD_RWLOCK_TRYRDLOCK 1

/* Define to 1 if you have the `pthread_rwlock_trywrlock' function. */
#define HAVE_PTHREAD_RWLOCK_TRYWRLOCK 1

/* Define to 1 if you have the `pthread_rwlock_wrlock' function. */
#define HAVE_PTHREAD_RWLOCK_WRLOCK 1

/* Define to 1 if you have the `pthread_setname_np' function. */
#define HAVE_PTHREAD_SETNAME_NP 1

/* Define to 1 if you have the `pthread_tryjoin_np' function. */
#define HAVE_PTHREAD_TRYJOIN_NP 1

/* Define to 1 if you have the `select' function. */
#define HAVE_SELECT 1

/* Define to 1 if you have the <signal.h> header file. */
#define HAVE_SIGNAL_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <time.h> header file. */
#define HAVE_TIME_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Defined if we run on any kind of W32 API based system */
/* #undef HAVE_W32_SYSTEM */

/* Defined if we run on a 64 bit W32 API based system */
/* #undef HAVE_W64_SYSTEM */

/* Define to 1 if you have the <winsock2.h> header file. */
/* #undef HAVE_WINSOCK2_H */

/* Define to 1 if you have the <ws2tcpip.h> header file. */
/* #undef HAVE_WS2TCPIP_H */

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Name of this package */
#define PACKAGE "npth"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "gnupg-devel@gnupg.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "npth"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "npth 1.2"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "npth"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.2"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Version of this package */
#define VERSION "1.2"

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

#ifndef _REENTRANT
# define _REENTRANT 1
#endif

/* Activate POSIX interface on MacOS X */
/* #undef _XOPEN_SOURCE */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* type to use in place of socklen_t if not defined */
/* #undef socklen_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef ssize_t */

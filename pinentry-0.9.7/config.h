/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */


#ifndef PINENTRY_CONFIG_H_INCLUDED
#define PINENTRY_CONFIG_H_INCLUDED

/* Enable gpg-error's strerror macro under W32CE.  */
#define GPG_ERR_ENABLE_ERRNO_MACROS 1



#ifndef GNUPG_CONFIG_H_INCLUDED
#define GNUPG_CONFIG_H_INCLUDED


/* The GUI pinentries should fall back to curses if X is not available. */
/* #undef FALLBACK_CURSES */

/* Nod nod */
/* #undef GCR_API_SUBJECT_TO_CHANGE */

/* version of the libassuan library */
#define GNUPG_LIBASSUAN_VERSION ""

/* Under WindowsCE we use the strerror replacement from libgpg-error. */
#define GPG_ERR_ENABLE_ERRNO_MACROS 1

/* Under Windows we use the gettext code from libgpg-error */
#define GPG_ERR_ENABLE_GETTEXT_MACROS 1

/* Defined if the mlock() call does not work */
/* #undef HAVE_BROKEN_MLOCK */

/* Defined if a `byte' is typedef'd */
/* #undef HAVE_BYTE_TYPEDEF */

/* Defined if we run on some of the PCDOS like systems (DOS, Windoze. OS/2)
   with special properties like no file modes */
/* #undef HAVE_DOSISH_SYSTEM */

/* Defined if the OS supports drive letters. */
/* #undef HAVE_DRIVE_LETTERS */

/* Define if you have the iconv() function. */
/* #undef HAVE_ICONV */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <langinfo.h> header file. */
#define HAVE_LANGINFO_H 1

/* Define to 1 if you have the `rt' library (-lrt). */
/* #undef HAVE_LIBRT */

/* The pinentries should optionally cache the passphrase using libsecret. */
/* #undef HAVE_LIBSECRET */

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Defined if the system supports an mlock() call */
#define HAVE_MLOCK 1

/* Define to 1 if you have the `mmap' function. */
#define HAVE_MMAP 1

/* Define if you have working ncursesw */
/* #undef HAVE_NCURSESW */

/* Define to 1 if you have the `plock' function. */
/* #undef HAVE_PLOCK */

/* Define to 1 if you have the `seteuid' function. */
#define HAVE_SETEUID 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `stpcpy' function. */
#define HAVE_STPCPY 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/mman.h> header file. */
/* #undef HAVE_SYS_MMAN_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <termio.h> header file. */
#define HAVE_TERMIO_H 1

/* Defined if a `ulong' is typedef'd */
#define HAVE_ULONG_TYPEDEF 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <utime.h> header file. */
#define HAVE_UTIME_H 1

/* Defined if we run on WindowsCE */
/* #undef HAVE_W32CE_SYSTEM */

/* Defined if we run on a W32 API based system */
/* #undef HAVE_W32_SYSTEM */

/* Define to 1 if you have the <wchar.h> header file. */
#define HAVE_WCHAR_H 1

/* Define as const if the declaration of iconv() needs const. */
/* #undef ICONV_CONST */

/* The GUI pinentries should respect INSIDE_EMACS envvar. */
#define INSIDE_EMACS 1

/* Name of package */
#define PACKAGE "pinentry"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "http://bugs.gnupg.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "pinentry"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "pinentry 0.9.7"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "pinentry"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.9.7"

/* The Curses version of Pinentry is to be build */
/* #undef PINENTRY_CURSES */

/* The Emacs version of Pinentry is to be build */
/* #undef PINENTRY_EMACS */

/* The qt version of Pinentry is to be build */
/* #undef PINENTRY_QT */

/* The TTY version of Pinentry is to be build */
/* #undef PINENTRY_TTY */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* The capabilities support library is installed */
/* #undef USE_CAPABILITIES */

/* Set this to limit filenames to the 8.3 format */
/* #undef USE_ONLY_8DOT3 */

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


/* Version number of package */
#define VERSION "0.9.7"

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Define for Solaris 2.5.1 so the uint32_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT32_T */

/* Define to the type of an unsigned integer type of width exactly 32 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint32_t */


#endif /*PINENTRY_CONFIG_H_INCLUDED*/



#ifdef GPG_ERR_SOURCE_DEFAULT
# error GPG_ERR_SOURCE_DEFAULT already defined
#endif
#define GPG_ERR_SOURCE_DEFAULT  GPG_ERR_SOURCE_PINENTRY
#endif /*GNUPG_CONFIG_H_INCLUDED*/


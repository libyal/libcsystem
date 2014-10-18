AC_PREREQ( 2.59 )

AC_INIT(
 [libcsystem],
 [20141019],
 [joachim.metz@gmail.com])

AC_CONFIG_SRCDIR(
 [include/libcsystem.h.in])

AM_INIT_AUTOMAKE([gnu 1.6 tar-ustar])

AC_CONFIG_MACRO_DIR([m4])

dnl Check for host type
AC_CANONICAL_HOST

dnl Check for large file support
AC_SYS_LARGEFILE

dnl Check for libtool DLL support
AC_LIBTOOL_WIN32_DLL

dnl Checks for programs
AC_PROG_CC
AC_PROG_GCC_TRADITIONAL
AC_PROG_MAKE_SET
AC_PROG_INSTALL

dnl Check for libtool
AC_PROG_LIBTOOL
AC_SUBST(LIBTOOL_DEPS)

dnl Check for pkg-config
AC_PATH_PROG(PKGCONFIG,[pkg-config])

dnl Support of internationalization (i18n)
AM_GNU_GETTEXT([external])
AM_GNU_GETTEXT_VERSION([0.18.1])

dnl Check for compiler language support
AC_C_CONST
AC_C_INLINE
AC_C_VOLATILE

dnl Check if WINAPI support should be enabled
AX_COMMON_CHECK_ENABLE_WINAPI

dnl Check if wide character type should be enabled
AX_COMMON_CHECK_ENABLE_WIDE_CHARACTER_TYPE

dnl Check for type definitions
AX_TYPES_CHECK_LOCAL

dnl Checks for libraries and library functions
AX_COMMON_CHECK_LOCAL

dnl Check for enabling libcstring for cross-platform C string functions
AX_LIBCSTRING_CHECK_ENABLE

dnl Check for enabling libcerror for cross-platform C error functions
AX_LIBCERROR_CHECK_ENABLE

dnl Check for enabling libclocale for cross-platform C locale functions
AX_LIBCLOCALE_CHECK_ENABLE

dnl Check for enabling libcnotify for cross-platform C notification functions
AX_LIBCNOTIFY_CHECK_ENABLE

dnl Check for enabling libuna for Unicode string support
AX_LIBUNA_CHECK_ENABLE

dnl Check for library function support
AX_LIBCSYSTEM_CHECK_LOCAL

dnl Check if libcsystem should be build with verbose output
AX_COMMON_CHECK_ENABLE_VERBOSE_OUTPUT

dnl Check if libcsystem should be build with debug output
AX_COMMON_CHECK_ENABLE_DEBUG_OUTPUT

dnl Headers included in various places
AC_CHECK_HEADERS([stdarg.h varargs.h])

AS_IF(
 [test "x$ac_cv_header_stdarg_h" != xyes && test "x$ac_cv_header_varargs_h" != xyes],
 [AC_MSG_FAILURE(
  [Missing headers: stdarg.h and varargs.h],
  [1])
 ])

dnl Check if DLL support is needed
AS_IF(
 [test "x$enable_shared" = xyes],
 [AS_CASE(
  [$host],
  [*cygwin* | *mingw*],
  [AC_DEFINE(
   [HAVE_DLLMAIN],
   [1],
   [Define to 1 to enable the DllMain function.])
  AC_SUBST(
   [HAVE_DLLMAIN],
   [1])
  ])
 ])

dnl Set additional compiler flags
CFLAGS="$CFLAGS -Wall";

dnl Check if requires and build requires should be set in spec file
AS_IF(
 [test "x$ac_cv_libcstring" = xyes || test "x$ac_cv_libcerror" = xyes || test "x$ac_cv_libclocale" = xyes || test "x$ac_cv_libcnotify" = xyes || test "x$ac_cv_libuna" = xyes],
 [AC_SUBST(
  [libcsystem_spec_requires],
  [Requires:])
 AC_SUBST(
  [libcsystem_spec_build_requires],
  [BuildRequires:])
 ])

dnl Set the date for the dpkg files
AC_SUBST(
 [DPKG_DATE],
 [`date -R 2> /dev/null`])

dnl Set the date for the spec file
AC_SUBST(
 [SPEC_DATE],
 [`date +"%a %b %e %Y" 2> /dev/null`])

dnl Set the current working directory for PackageMaker files
AC_SUBST(
 [PWD],
 [`pwd`])

dnl Have configure make the Makefiles
AC_CONFIG_FILES([Makefile])
AC_CONFIG_FILES([include/Makefile])
AC_CONFIG_FILES([common/Makefile])
AC_CONFIG_FILES([libcstring/Makefile])
AC_CONFIG_FILES([libcerror/Makefile])
AC_CONFIG_FILES([libclocale/Makefile])
AC_CONFIG_FILES([libcnotify/Makefile])
AC_CONFIG_FILES([libuna/Makefile])
AC_CONFIG_FILES([libcsystem/Makefile])
AC_CONFIG_FILES([po/Makefile.in])
AC_CONFIG_FILES([po/Makevars])
AC_CONFIG_FILES([manuals/Makefile])
AC_CONFIG_FILES([tests/Makefile])
AC_CONFIG_FILES([msvscpp/Makefile])
dnl Have configure make the include files
AC_CONFIG_FILES([include/libcsystem.h])
AC_CONFIG_FILES([include/libcsystem/definitions.h])
AC_CONFIG_FILES([include/libcsystem/features.h])
AC_CONFIG_FILES([include/libcsystem/types.h])
AC_CONFIG_FILES([libcsystem/libcsystem_definitions.h])
dnl Have configure make distribution specific files
AC_CONFIG_FILES([common/types.h])
AC_CONFIG_FILES([dpkg/changelog])
AC_CONFIG_FILES([dpkg/copyright])
AC_CONFIG_FILES([libcsystem/libcsystem.rc])
AC_CONFIG_FILES([libcsystem.pc])
AC_CONFIG_FILES([libcsystem.spec])
dnl Have configure write its configuration
AC_CONFIG_HEADERS([common/config.h])

AC_OUTPUT

dnl Print a summary
AC_MSG_NOTICE([
Building:
   libcstring support:          $ac_cv_libcstring
   libcerror support:           $ac_cv_libcerror
   libclocale support:          $ac_cv_libclocale
   libcnotify support:          $ac_cv_libcnotify
   libuna support:              $ac_cv_libuna

Features:
   Wide character type support: $ac_cv_enable_wide_character_type
   Verbose output:              $ac_cv_enable_verbose_output
   Debug output:                $ac_cv_enable_debug_output
]);

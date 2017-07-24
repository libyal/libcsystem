AM_CPPFLAGS = \
	-I$(top_srcdir)/include \
	-I$(top_srcdir)/common \
	@LIBCERROR_CPPFLAGS@ \
	@LIBCLOCALE_CPPFLAGS@ \
	@LIBCNOTIFY_CPPFLAGS@ \
	@LIBUNA_CPPFLAGS@ \
	@LIBCSYSTEM_DLL_IMPORT@

TESTS = \
	test_library.sh

check_SCRIPTS = \
	test_library.sh \
	test_runner.sh

EXTRA_DIST = \
	$(check_SCRIPTS)

check_PROGRAMS = \
	csystem_test_error \
	csystem_test_getopt \
	csystem_test_support

csystem_test_error_SOURCES = \
	csystem_test_error.c \
	csystem_test_libcsystem.h \
	csystem_test_macros.h \
	csystem_test_unused.h

csystem_test_error_LDADD = \
	../libcsystem/libcsystem.la

csystem_test_getopt_SOURCES = \
	csystem_test_getopt.c \
	csystem_test_libcerror.h \
	csystem_test_libcsystem.h \
	csystem_test_macros.h \
	csystem_test_memory.c csystem_test_memory.h \
	csystem_test_unused.h

csystem_test_getopt_LDADD = \
	../libcsystem/libcsystem.la \
	@LIBCERROR_LIBADD@

csystem_test_support_SOURCES = \
	csystem_test_libcerror.h \
	csystem_test_libcsystem.h \
	csystem_test_macros.h \
	csystem_test_support.c \
	csystem_test_unused.h

csystem_test_support_LDADD = \
	../libcsystem/libcsystem.la \
	@LIBCERROR_LIBADD@

MAINTAINERCLEANFILES = \
	Makefile.in

distclean: clean
	/bin/rm -f Makefile


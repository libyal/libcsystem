AM_CPPFLAGS = \
	-I$(top_srcdir)/include \
	-I$(top_srcdir)/common \
	@LIBCSTRING_CPPFLAGS@ \
	@LIBCERROR_CPPFLAGS@ \
	@LIBCSYSTEM_DLL_IMPORT@

TESTS = \
	test_api_functions.sh

check_SCRIPTS = \
	test_api_functions.sh \
	test_runner.sh

EXTRA_DIST = \
	$(check_SCRIPTS)

check_PROGRAMS = \
	csystem_test_support

csystem_test_support_SOURCES = \
	csystem_test_libcstring.h \
	csystem_test_libcsystem.h \
	csystem_test_macros.h \
	csystem_test_support.c \
	csystem_test_unused.h

csystem_test_support_LDADD = \
	../libcsystem/libcsystem.la \
	@LIBCSTRING_LIBADD@

MAINTAINERCLEANFILES = \
	Makefile.in

distclean: clean
	/bin/rm -f Makefile


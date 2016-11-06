include_HEADERS = \
	libcsystem.h

pkginclude_HEADERS = \
	libcsystem/definitions.h \
	libcsystem/error.h \
	libcsystem/extern.h \
	libcsystem/features.h \
	libcsystem/types.h

EXTRA_DIST = \
	libcsystem.h.in \
	libcsystem/definitions.h.in \
	libcsystem/features.h.in \
	libcsystem/types.h.in

MAINTAINERCLEANFILES = \
	Makefile.in

distclean: clean
	/bin/rm -f libcsystem.h
	/bin/rm -f libcsystem/definitions.h
	/bin/rm -f libcsystem/features.h
	/bin/rm -f libcsystem/types.h
	/bin/rm -f Makefile


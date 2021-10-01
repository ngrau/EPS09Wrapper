AUTOMAKE_OPTIONS = foreign

INCLUDES = -I$(includedir)

lib_LTLIBRARIES = \
  libEPS09Wrapper.la

dist_pkgdata_DATA = \
 EPS09LOR_64 \
 EPS09LOR_197 \
 EPS09NLOR_64 \
 EPS09NLOR_197

pkginclude_HEADERS = \
  AUEPS09.h

libEPS09Wrapper_la_LIBADD = \
  -L$(libdir) \
  $(FLIBS)

libEPS09Wrapper_la_SOURCES = \
  EPS09.f \
  AUEPS09.cc

clean-local:
	rm -f *Dict*

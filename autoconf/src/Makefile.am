AUTOMAKE_OPTIONS=foreign

bin_PROGRAMS=helloworld

helloworld_SOURCES=main.c 

noinst_HEADERS=add.h
helloworld_LDADD=$(top_builddir)/src/libadd.la

helloworld_CPPFLAGS =-DCONFIG_DIR=\"$(sysconfdir)\" -DLIBRARY_DIR=\"$(pkglibdir)\"
helloworld_LDFLAGS=-lm

noinst_LTLIBRARIES=libadd.la
libadd_la_SOURCES=add.c
libadd_la_LIBADD = @LDFLAGS@

EXTRA_DIST = libadd.la .libs/libadd.a

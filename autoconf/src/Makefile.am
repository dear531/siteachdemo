AUTOMAKE_OPTIONS=foreign

bin_PROGRAMS=helloworld

helloworld_SOURCES=main.c 
noinst_HEADERS=$(top_builddir)/include/add.h
helloworld_LDADD=$(top_builddir)/lib/libadd.la

helloworld_CPPFLAGS =-DCONFIG_DIR=\"$(sysconfdir)\" -DLIBRARY_DIR=\"$(pkglibdir)\" -I$(top_srcdir)/include
helloworld_LDFLAGS=-lm


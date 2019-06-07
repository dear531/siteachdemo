AUTOMAKE_OPTIONS=foreign

bin_PROGRAMS=helloworld

helloworld_SOURCES=main.c 

include_HEADERS=add.h
helloworld_LDADD=$(top_builddir)/libadd.la

noinst_LTLIBRARIES=libadd.la
libadd_la_SOURCES=add.c

helloworld_CPPFLAGS = -I .
EXTRA_DIST = libadd.la

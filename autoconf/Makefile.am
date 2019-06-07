AUTOMAKE_OPTIONS=foreign

bin_PROGRAMS=helloworld

helloworld_SOURCES=main.c 

include_HEADERS=add.h
helloworld_LDADD=-L. -ladd

noinst_LIBRARIES=libadd.a
libadd_a_SOURCES=add.c

helloworld_CPPFLAGS = -I .
EXTRA_DIST = libadd.a

default:binary
objfunc:
	libtool --mode=compile --tag=CC gcc -O -c func.c
objmain:
	libtool --mode=compile --tag=CC gcc -O -c main.c
object:objfunc objmain
library:objfunc
	libtool --mode=link --tag=CC gcc -o libfunc.la -g -O func.lo \
		-rpath /usr/local/lib
binary:objmain library
	#libtool --mode=link --tag=CC gcc func.lo main.lo -o a.out
	libtool --mode=link --tag=CC gcc libfunc.la main.lo -o a.out
clean:
	-rm -rf *.lo *.o *la .libs a.out
.PHONY:
	clean

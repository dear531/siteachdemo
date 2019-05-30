default:binary
object:
	libtool --mode=compile --tag=CC gcc -O -c func.c
	libtool --mode=compile --tag=CC gcc -O -c main.c
binary:object
	libtool --mode=link --tag=CC gcc func.lo main.lo -o a.out
clean:
	-rm -rf *.lo *.o .libs a.out
.PHONY:
	clean

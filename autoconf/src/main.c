#include <stdio.h>
#include <math.h>
#include "add.h"

int main(void)
{
	int m = 1, n = 2;
	double d = 5.0;
	fprintf(stdout, "hello world\n");
	fprintf(stdout, "%d + %d = %d\n", m, n, add(m, n));
	fprintf(stdout, "log(%lf):%lf\n", d, log(d));
	return 0;
}

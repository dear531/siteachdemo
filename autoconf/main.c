#include <stdio.h>
#include "add.h"

int main(void)
{
	int m = 1, n = 2;
	fprintf(stdout, "hello world\n");
	fprintf(stdout, "%d + %d = %d\n", m, n, add(m, n));
	return 0;
}

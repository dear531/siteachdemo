#include <stdio.h>
#include "func.h"

int main(void)
{
	int m = 1, n = 2;
	fprintf(stdout, "%d + %d = %d\n",  n, m, add(m, n));
	return 0;
}

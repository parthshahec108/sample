#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	int a, b;

	a = 13;

	b = 23;

	printf("%d ", ~b);

	printf("\tsum = %d", a+b);

	printf("\tsum_1 = %d", a - ~b);

	printf("\tsum_2 = %d", a - -b);

	printf("\tminus = %d\n", a + ~b + 1);
}

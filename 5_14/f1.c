#include <stdio.h>
#include "f2.c"
#include "f3.c"
main()
{
	int a, b, c, s,m;
	printf("\n a,b,c=?");
	scanf_s("%d,%d,%d", &a, &b, &c);
	s = sum(a, b, c);
	m = mul(a, b, c);
	printf("The sum is %d\n", s);
	printf("The mul is %d\n", m);
}
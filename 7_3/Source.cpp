#include <stdio.h>

int main(int argc, char* argv[])
{
	int* p1, * p2, * p, a, b;
	scanf_s("%d,%d", &a, &b);
	p1 = &a; p2 = &b;
	if (a<b)
	{
		p = p1;
		p1 = p2;
		p2 = p;
	}
	printf("\n a=%d ,b=%d \n", a, b);
	printf("max=%d,min=%d", *p1, *p2);
}

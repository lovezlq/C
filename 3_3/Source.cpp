#include <stdio.h>

int main(int argc, char* argv[])
{
	int	a, b, max;
	printf("Please input two numbers");
	scanf_s("%d,%d",&a,&b);
	printf("a=%d,b=%d", a, b);
	max = a;
	if (max<b)
		max = b;
	printf("max=%d", max);
}

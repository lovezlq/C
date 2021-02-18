#include <stdio.h>

int main(int argc, char* argv[])
{
	int a, b;
	printf("input two	numbers");
	scanf_s("%d,%d", &a, &b);
	if (a>b)
	{
		printf("max=%d", a);
	}
	else
		printf("max=%d\n", b);
}

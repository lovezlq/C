#include <stdio.h>

int main(int argc, char* argv[])
{
	int a = 0, n;
	printf("\n input n:");
	scanf_s("%d", &n);
	for (; n > 0; a++, n--)
		printf("%d", a * 2);
}

#include <stdio.h>

int main(int argc, char* argv[])
{
	int a, b, r, p;
	scanf_s("%d,%d", &a, &b);
	p = a * b;
	r = a % b;
	while (r!=0)
	{
		a = b; b = r; r = a % b;
	}
	p = p / b;
	printf("它们的最大公约数为:%d\n", b);
	printf("他们的最小公倍数为：%d\n", p);
}

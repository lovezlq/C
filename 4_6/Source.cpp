#include <stdio.h>

int main(int argc, char* argv[])
{
	int n, m, sign = 1;
	printf("请输入一个大于3的正整数n:");
	for (int m = 2; m < n/2; ++m)
	{
		if (n % m == 0)
			sign = 0;
	}
}

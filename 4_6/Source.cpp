#include <stdio.h>

int main(int argc, char* argv[])
{
	int n, m, sign = 1;
	printf("������һ������3��������n:");
	for (int m = 2; m < n/2; ++m)
	{
		if (n % m == 0)
			sign = 0;
	}
}

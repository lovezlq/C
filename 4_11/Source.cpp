#include <stdio.h>

int main(int argc, char* argv[])
{
	int m, k, i, n = 0;
	for (int m = 101; m < 200; ++m)
	{
		k = m / 2;
		for (i = 2; i <= k; ++i) {}

		if (m % i == 0)

			break;
		if (i >= k + 1)
		{
			printf("%d,", m);
			n += 1;
		}

		if (n % 10 == 0)
		{
			printf("\n");
		}


	}
	
	
}

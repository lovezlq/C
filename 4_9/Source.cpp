#include <stdio.h>

/*
int main(int argc, char* argv[])
{
	int i, j, k = 0;
	for (int i = 100; i < 1000; ++i)
	{
		if (i%2!=0)
		{
			if (k%8==0)
			{
				printf("\n");
				for (int j = 0; j < 8; ++j)
				{
					printf("------");
				}
				printf("\n");
			}
			printf("%d,", i);
			k++;
		}
	}
}*/

int main(int argc, char* argv[])
{
	int i, j, k = 0;
	for (int i = 100; i < 1000; ++i)
	{
		if (i%2!=0)
		{
			if (k%8==0)
			{
				printf("\n");
				j = 1;
				while (j<=8)
				{
					printf("_____");
					j++;
				}
				printf("\n");
			}
			printf("%d,", i);
			k++;
		}
	}
}

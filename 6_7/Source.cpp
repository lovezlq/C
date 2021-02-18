#include <stdio.h>

int main(int argc, char* argv[])
{
	int a[2][3], b[3][2], i, j;

	for (i = 0; i < 2; ++i)
	{
		for (j = 0; j < 3; ++j)
		{
			scanf_s("%d", &a[i][j]);
			
		}
	}
	printf("array a:\n");
	for ( i = 0; i < 2; ++i)
	{
		for (j = 0; j < 3; ++j)
		{
			printf("%5d", a[i][j]);
			b[j][i] = a[i][j];
		}
		printf("\n");
	}
	printf("array b:\n");
	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 2; ++j)
		{
			printf("%5d", b[i][j]);
			
		}
		printf("\n");
	}
}

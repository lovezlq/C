#include <stdio.h>
#define  SIZE 10

int main(int argc, char* argv[])
{
	int a[SIZE] = {5, 3, 2, 6, 1, 7, 9, 8, 11};
	int i, x;
	printf("Please  input x:");

	scanf_s("%d", &x);
	for ( i = 0; i < SIZE; ++i)
	{
		if (a[i]==x)
		{
			break;
			
		}
	
	}

		if (i<SIZE)
		{
			printf("Found %d,located in %d pasition \n", x, i + 1);
			
		}else
		{
			printf("Not found%d\n", x);
			
		}
}

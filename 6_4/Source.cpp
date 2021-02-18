#include <stdio.h>

int main(int argc, char* argv[])
{
	int I, j, t, max, maxj, b[10];
	for ( I = 0; I < 10; I++)
	{
		scanf_s("%d",&b[I]);
	}
	for ( j = 0; j < 9; j++)
	{
		max = b[j]; maxj = j;
		for ( I = j; I < 10; ++I)
		{
			if (b[I]>max)
			{
				max = b[I]; maxj = I;
				
			}
			
		}
		t = b[maxj]; b[maxj] = b[j]; b[j] = t;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%4d", b[i]);
	}
	printf("\n");
	

	
	
}

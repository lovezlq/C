#include <stdio.h>

int main(int argc, char* argv[])
{
	int i, j,k = 0;
	for (int i =  100; i < 1000; ++i)
	{
		if (i%2!=0)
		{
			if (k%8==0)
			{
				printf("\n");
				
			}
			printf("%d,", i);
				k++;
		}
	}
}

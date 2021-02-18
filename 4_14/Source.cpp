#include <stdio.h>

int main(int argc, char* argv[])
{
	int	I = 0,j, k;
	double r;
	printf("big    middle   small\n");
	while (I<33)
	{
		j = 0;
		while (j<=(50-I))
		{
			k = 100 - I - j;
			r = 3 * I + 2 * j + 0.5 * k;
			if (r==100)
			{
				printf("%d,%d,%d\n", I, j, k);
			}
			j++;
			
		}I++;
	}
}

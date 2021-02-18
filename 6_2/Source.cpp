#include <stdio.h>

int main(int argc, char* argv[])
{
	int i, max, a[10];
	printf("input 10 numbers:\n");
	for (int i = 0; i < 10; ++i)
	{
		scanf_s("%d", &a[i]);
		max = a[0];
		
	}
	for (int i = 0; i < 11; ++i)
	{
		if (a[i]>max)
		{
			max = a[i];
		}
	}
	printf("max num =%d\n", max);
	
}

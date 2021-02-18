#include <stdio.h>

int main(int argc, char* argv[])
{
	int a[5],i;
	for ( i = 0; i < 5; ++i)
	{
		a[i] = i;
	}
	for ( i = 0; i < 5; ++i)
	{
		printf("a[%d]=%d\n", i, a[i]);
	}
	
}

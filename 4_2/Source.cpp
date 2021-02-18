#include <stdio.h>
int main(int argc, char* argv[])
{
	int i, sum = 0;
	i = 1;
	while (i<=100)
	{
		sum = sum + i;
		i++;
		
	}
	printf("sum=%d", sum);
}

#include <stdio.h>

int main(int argc, char* argv[])
{
	int i, sum = 0;
	i = 1;
	do
	{
		sum += i;
		i++;
	}
	while (i<=100);
	printf("%d", sum);
}

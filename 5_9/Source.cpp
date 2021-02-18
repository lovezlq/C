#include <stdio.h>

long ff(int n)
{
	long f_i;
	if (n < 0)
	{
		printf("n<0 ,input error");
	}
	else if (n == 0 || n == 1)
	{
		f_i = 1;
	}
	else
		f_i = ff(n - 1) * n;
		return (f_i);
}

int main(int argc, char* argv[])
{
	int n_i;
	long y_i;
	printf("\n input a integer number:\n");
	scanf_s("%d", &n_i);
	y_i = ff(n_i);
	printf("%d!=%ld", n_i, y_i);
	
}

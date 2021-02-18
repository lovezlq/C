#include <stdio.h>
#define	N 100
int main(int argc, char* argv[])
{
	int i, sum = 0;
	for (int i = 0; i <=N; i=i+2)
	{
		sum += i;
		printf("sum=%d\n", sum);
	}
}

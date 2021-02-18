#include <stdio.h>

int main(int argc, char* argv[])
{
	int n = 0;
	printf("input a string \n");
	while (getchar()!='\n')
	{
		n++;
	}
	printf("%d", n);
}

#include <stdio.h>
void swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	printf("in the function swap *a = %d *b=%d \n ", *a, *b);
	
}

int main(int argc, char* argv[])
{
	int i, j;
	i = 431;
	j = 53;
	printf("\n before calling :i=%d j=%d\n", i, j);
	swap(&i, &j);
	printf("\n before calling :i=%d j=%d\n", i, j);
}

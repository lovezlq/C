#include <stdio.h>



int main(int argc, char* argv[])
{
	int a[5] = { 1,3,5,7,9 }, I, * p;
	for ( I = 0; I < 5; ++I)
	{
		printf("%d", a[I]);
	}
	printf("\n");
	for ( I = 0; I < 5; ++I)
	{
		printf("%d", *(a + 1));
	}
	printf("\n");
	for ( p = 0; p < a+5; ++p)
	{
		printf("%d", *p);
	}
	
	
}

#include <stdio.h>

void swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	

}

int main(int argc, char* argv[])
{
	int a, b;
	int* pointer1, * pointer2;
	scanf_s("%d,%d", &a, &b);
	pointer1 = &a; pointer2 = &b;
	if (a<b)
	{
		swap(pointer1, pointer2);
		
	}
	printf("\n %d,%d", a, b);
	
	
}

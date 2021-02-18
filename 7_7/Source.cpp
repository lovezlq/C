#include <stdio.h>

void swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;

	
}
void exchange(int *q1,int *q2,int *q3)
{
	if (*q1<*q2)
	{
		swap(q1, q2);
		
	}
	if (*q1<*q3)
	{
		swap(q1, q3);
		
	}

	if (*q2<*q3)
	{
		swap(q2 , q3);
	}
}

int main(int argc, char* argv[])
{
	int a, b, c, * p11, * p22, * p33;
	scanf_s("%d,%d,%d", &a, &b, &c);
	p11 = &a; p22 = &b; p33 = &c;
	exchange(p11, p22, p33);
	printf("\n%d,%d,%d\n", a, b, c);
	
	
}

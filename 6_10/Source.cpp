#include <stdio.h>
int sum(int array[] ,int n)
{
	int i, s = 0;
	for ( i = 0; i < n; ++i)
	{
		s += array[i];
		
	}

	return s;
	
}

int main(int argc, char* argv[])
{
	int num ,a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	scanf_s("%d", &num);
	printf("%d\n", sum(a, num));
	
}

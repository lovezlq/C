#include <stdio.h>

int main(int argc, char* argv[])
{
	int a = 3, b = 5;
	void swap(int, int);
	swap(a, b);
	printf("a=%d ,b=%d \n", a, b);
}

void swap( int x,int y)
{
	int temp;
	temp = x; x = y; y = temp;
	printf("x= %d, y=%d", x, y);
}

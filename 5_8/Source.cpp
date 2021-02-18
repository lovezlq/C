#include <stdio.h>
int max(int x,int y)
{
	int Max;
	if (x < y)
	{
		Max = y;
		
	}
	else
		Max = x;
}

int main(int argc, char* argv[])
{
	int a, b, c, d;
	int max(int, int);
	scanf_s("%d,%d,%d", &a, &b, &c);
	d = max(a, max(b, c));
	printf("%d", d);
	
}


#include <stdio.h>

void change(int x[2])
{
	int t;
	
	printf("x[0]=%d ,x[1]=%d\n", x[0], x[1]);
	t = x[0]; x[0] = x[1]; x[1] = t;
	printf("x[0]=%d%,x[1]=%d\n",x[0],x[1]);
}

int main(int argc, char* argv[])
{
	int a[2] = { 3,4 };
	printf("a[0]=%d ,a[1]=%d\n", a[0], a[1]);
	change(a);
	printf("a[0]=%d%,a[1]=%d\n", a[0], a[1]);
}

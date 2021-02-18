#include <stdio.h>
void swap(float a,float b,float c)
{
	float t;
	if (a>b)
	{
		t = a; a = b; b = t;
	}
	if (a>c)
	{
		t = a; a = c; c = t;
	}
	if (b>c)
	{
		t = b; b = c; c= t;
	}
	printf("%f,%f,%f", a, b, c);
}

int main(int argc, char* argv[])
{
	float a, b, c, t;

	printf("please input a,b,c:");
	scanf_s("%f,%f,%f", &a, &b, &c);
	swap(a, b, c);
}

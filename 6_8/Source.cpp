#include <stdio.h>

float max(float x,float y)
{
	float z;
	if (x>y)
	{
		z = x;
	}
	else
		z = y;
	return z;
}
int main(int argc, char* argv[])
{
	float a[2], c;
	printf("Please input two numbers:");
	scanf_s("%f,%f", &a[0], &a[1]);
	c = max(a[0], a[1]);
	printf("%f ,%f,the max is %f \n", a[0], a[1], c);
}

#include <stdio.h>

int main(int argc, char* argv[])
{
	float r, h, v, pi = 3.14159;
	printf("Please input radius & high:");

	scanf_s("%f%f", &r, &h);
	v = pi * r * r * h;
	printf_s("radius=%7.2f,high=%7.2f,vol=%7.2f\n", r, h, v);
	
}

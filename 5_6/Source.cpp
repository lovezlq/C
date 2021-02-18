#include <stdio.h>

int main(int argc, char* argv[])
{
	float sub(float a, float b);
	float n1, n2, result;
	scanf_s("%f,%f", &n1, &n2);

	result = sub(n1, n2);
	printf("result= %f\n", result);

	
}
float sub(float x, float y)
	{
	float z;
	z = x - y;
	return z;
	}
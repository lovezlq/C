
#include <cmath>
#include <stdio.h>

int main(int argc, char* argv[])
{
	int x1, x2, sum;
	float aver ,root;
	printf("Please input two numbers");
	scanf_s("%d,%d", &x1, &x2);
	sum = x1 + x2;
	aver = sum / 2.0;
	root = sqrt(sum);
	printf("x1=%d,x2=%d\n", x1, x2);
	printf("aver=%7.2f,root=%7.2f\n", aver, root);
}

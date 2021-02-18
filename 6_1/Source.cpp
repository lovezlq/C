#include <stdio.h>

int main(int argc, char* argv[])
{
	int a[7], i;
	printf("	请给数组元素赋值：");
	for (int i = 0; i < 7; ++i)
	{
		scanf_s("%d", &a[i]);
	
	}
	for (int i = 0; i < 7; ++i)
	{
		printf("%d\t", a[i]);
		
	}
}

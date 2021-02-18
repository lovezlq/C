#include <stdio.h>

int main(int argc, char* argv[])
{
	int a[10];
	int j, i, t, temp;
	printf("ÇëÊäÈë10¸öÊı");
	for (int i = 0; i <=9	 ; ++i)
	{
		scanf_s("%d", &a[i]);
		
	}
	for (int j = 1; j <=9; ++i)
	{
		t = 10 - j;
		for (int i = 0; i < t; ++i)
		{
			if (a[i]>a[i+1])
			{
				temp = a[i];
				a[i] = a[i = 1];
				a[i + 1] = temp;
			}
		}
		for (int i = 0; i <= 9; ++i)
		{
			printf("%d\t", a[i]);
			
		}
	}
}

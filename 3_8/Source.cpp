#include <stdio.h>

int main(int argc, char* argv[])
{
	int year, leap;
	printf("输入年份:");
	scanf_s("%d", &year);
	if ((year % 4 == 0 & year % 100 != 0) || year % 100 == 0)
	{
		leap = 1;
	}leap = 0;
	if (leap)
	{
		printf("%d是闰年\n",year);
	}
	else
		printf("%d不是闰年\n", year);
}

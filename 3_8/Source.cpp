#include <stdio.h>

int main(int argc, char* argv[])
{
	int year, leap;
	printf("�������:");
	scanf_s("%d", &year);
	if ((year % 4 == 0 & year % 100 != 0) || year % 100 == 0)
	{
		leap = 1;
	}leap = 0;
	if (leap)
	{
		printf("%d������\n",year);
	}
	else
		printf("%d��������\n", year);
}

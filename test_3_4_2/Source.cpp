#include <stdio.h>

int main(int argc, char* argv[])
{
	int a;
	printf("input integer number");
	scanf_s("%d", &a);

	switch (a)
	{
	case 1:printf("Monday");break;
	case 2:printf("Tuesday");break;
	case 3:printf("Wednesday");break;
	case 4:printf("Thursday");break;
	case 5:printf("Friday");break;
	case 6:printf("Saturday");break;
	case 7:printf("Sunday");break;
	default:printf("err\n");
	}
}

#include <stdio.h>

int main(int argc, char* argv[])
{
	int year, month, day;
	scanf_s("%d,%d", &year, &month);
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:day = 31; break;
	case 4:
	case 6:
	case 9:
	case 11:day = 30;break;
	case 2: if ((year%4==0&&year%100!=0)||year%400==0)
		{
		day = 28;
	}
		  else
		day = 29;
		break;
	default:printf("error");
	}
	printf("year=%d,month=%d,day=%d", year, month, day);
	
	
}

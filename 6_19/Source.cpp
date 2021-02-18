#include <cstdlib>
#include <stdio.h>
#include "string.h"

int main(int argc, char* argv[])
{
	char str[80];
	int i = 0;
	while (1)
	{
		printf("please input password: \n");
		gets_s(str);
		if (strcmp(str,"password")!=0)
		{
			printf("密码错误,请重新输入!\n");
		
		}else
			break;
		i++;
		if (i==3)
		{
			printf("密码3次不正确，退出系统!\n");
			exit(0);
		}
	}

	printf("密码正确，进入系统!\n");
	
}

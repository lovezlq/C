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
			printf("�������,����������!\n");
		
		}else
			break;
		i++;
		if (i==3)
		{
			printf("����3�β���ȷ���˳�ϵͳ!\n");
			exit(0);
		}
	}

	printf("������ȷ������ϵͳ!\n");
	
}

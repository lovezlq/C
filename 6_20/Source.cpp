#include "stdio.h"
#include "string.h"

int main(int argc, char* argv[])
{
	char string[20];
	char str[3][20];
	int i;
	for (i = 0; i < 3; ++i)
	{
		gets_s(str[i]);
	}
	if (strcmp(str[0],str[1])>0)
	{
		strcpy(string, str[0]);
	}
	else
		strcpy(string, str[1]);
	if (strcmp(string,str[2])<0)
	{
		strcpy(string, str[2]);
	}
	printf("the lagest string is :\n%s\n", string);
}

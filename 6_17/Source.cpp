#include "string.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
	int k;
	char st1[15], st2[] = "C Language";
	printf("input a string :\n");
	gets_s(st1);
	k = strcmp(st1, st2);
	if (k==0)
	{
		printf("st1=st2\n");
	}
	if (k>0)
	{
		printf("st1>st2\n");
	}
	if (k<0)
	{
		printf("st1<st2");
	}
}

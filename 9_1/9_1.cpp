#include <cstdlib>
#include "stdio.h"
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(int argc, char* argv[])
{
	FILE* fp;
	char ch;
	if ((fp=fopen("A.dat","w+"))==NULL)
	{
		printf("connot open file!\n");
		exit(0);
		
	}
	while ((ch=getchar())!='#')
	{
		fputc(ch, fp);
		fclose(fp);
		
	}
}

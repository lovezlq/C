#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	FILE* fp;
	char ch;
	if ((fp=fopen("A.dat","r"))==NULL)
	{
		printf("connot open file !\n");
		exit(0);
		
	}
	while ((ch=fgetc(fp))!=EOF)
	{
		putchar(ch);
		
	}
	fclose(fp);
	
}

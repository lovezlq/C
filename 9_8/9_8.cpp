#include <cstdlib>
#include <stdio.h>

v

int main(int argc, char* argv[])
{
	char string[] = "Welcome you";
	char display[15];
	FILE* fp;
	char c;
	if ((fp=fopen("file1.txt","w+"))==NULL)
	{
		printf("connot open file");
		exit(1);
		
	}else
	{
		fputc(string,fp);
		rewind(fp);
		fgetc(display, 15, fp);
		puts(display);
		fclose(fp);
		
	}
	
}

#include <conio.h>
#include <cstdlib>
#include <stdio.h>

int main(int argc, char* argv[])
{
	FILE* fp;
	char ch, st[20];
	if ((fp=fopen("a.dat","at+"))==NULL)
	{
		printf("connot open file!");
		getch();
		exit(0);

		
	}
	printf("input a string:\n");
	scanf_s("%s", st);
	fputs(st, fp);
	rewind(fp);
	ch = fgetc(fp);
	while (ch!=EOF)
	{
		putchar(ch);
		ch = fgetc(fp);
		printf("\n");
		fclose(fp);
		
	}
}

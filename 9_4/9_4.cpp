#include <stdio.h>
#include <conio.h>
#include <cstdlib>

int main(int argc, char* argv[])
{
	FILE* fp;
	char str[11];
	if ((fp=fopen("a.dat","rt"))==NULL)
	{
		printf("connot open file !");
		getch();
		exit(0);
		
	}
	fgets(str, 11, fp);
	printf("%s", str);
	fclose(fp);
	
}

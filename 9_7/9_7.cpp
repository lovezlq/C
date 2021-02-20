#include <conio.h>
#include <cstdlib>
#include <stdio.h>

struct stu
{
	char name[10];
	int num;
	int age;
	char addr[15];
	
}boya[2],boyb[2],*pp,*qq;

int main(int argc, char* argv[])
{
	FILE *fp;
	char ch;

	int i;
	pp = boya;
	qq = boyb;
	if ((fp = fopen("stu_list","wb+"))==NULL)
	{
		printf("connot open file strike any key exit ");
		getch();
		exit(1);
		
	}

	printf("\n input data \n");
	for (i = 0; i < 2; ++i, pp++)
	{
		scanf("%s%d%d%s", pp->num, &pp->num, &pp->age, pp->addr);
		
	}
	rewind(fp);

	for ( i = 0; i < 2; ++i,qq++)
	{
		fscanf(fp, "%s %d %d %s\n", qq->name, qq->num, qq->age, qq->addr);
		
	}
	printf("\n \n number \t number age addr \n");
	qq = boyb;
	for ( i = 0; i < 2; ++i,qq++)
	{
		printf("%s\t %5d %7d %s\n ", qq->name, qq->num, qq->age, qq->addr);
		
	}
	fclose(fp);
	
}

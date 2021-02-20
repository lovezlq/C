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
	FILE* fp;
	char ch;
	int i;
	pp = boya;
	qq = boyb;
	if ((fp=fopen("stu_list","wb+"))==NULL)
	{
		printf("Connot open	 file strike any kety exit");
		getch();
		exit(0);
		
	}

	printf("\n input data \n");
	for ( i = 0; i < 2; ++i,pp++)
	{
		scanf_s("%s %d %d %s", pp->name, pp->num, pp->age, pp->addr);
		pp = boya;
		fwrite(pp, sizeof(struct stu), 2, fp);
		rewind(fp);
		fread(qq, sizeof(struct stu), 2, fp);
		printf("\n\n name \t number age addr\n");
		for (int i = 0; i < 2; ++i,qq++)
		{
			printf("%s\t %5d%7d%s\n", qq->name, qq->num, qq->age, qq->addr);
			fclose(fp);
			
		}
	}
}

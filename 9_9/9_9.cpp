#include <cstdlib>
#include <stdio.h>


struct student_type
{
	char name[10];
	int num;
	int age;
	char addr[30];
	
}stud[10];

int main(int argc, char* argv[])
{
	FILE* fp;
	int i;
	if ((fp = fopen("student", "rb")) == NULL)
	{
		printf("connot open file \n!");
		exit(1);

	}
	for (i = 0; i < 10; i += 2)
	{
		fseek(fp, i * sizeof(struct student_type), 0);
		fread(&stud[i], sizeof(struct student_type), 1, fp);
		printf("\n\nname \t number age addr \n");
		printf("%s  %d %d %c \n", stud[i].name, stud[i].num, stud[i].age, stud[i].addr);
		
	}
	fclose(fp);
	fclose(fp);
	
}
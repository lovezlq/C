#include <stdio.h>

struct stu
{
	int num;
	const char* name;
	char sex;
	float score;
	
}boy1={102,"zhangsan",'M',78.2},*pstu;

int main(int argc, char* argv[])
{
	pstu = &boy1;
	printf("number =%d \n name =%s\n", boy1.num, boy1.name);
	printf("sex=%c \n score  =%f\n\n", boy1.sex, boy1.score);

	printf("number =%d \n name =%s\n", (*pstu).num, (*pstu).name);
	printf("sex=%c \n score  =%f\n\n", (*pstu).sex, (*pstu).score);

	printf("number =%d \n name =%s\n", pstu->num, pstu->name);
	printf("sex=%c \n score  =%f\n\n",pstu->sex, pstu->score);
}

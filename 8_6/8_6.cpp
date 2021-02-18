#include <stdio.h>

struct stu
{
	int num;
	const char* name;
	char sex;
	float score;
}boy[5]={
	{101,"zhouping",'m',45},
	{102,"zhangping",'m',62.5},
	{103,"liou fang",'F',92.5},
	{104,"chengling",'f',87},
	{105,"wangming",'m',58}
};

int main(int argc, char* argv[])
{
	struct stu* ps;
	printf("No\t Name \t\t\t sex \t score\t \n");
	for ( ps = boy; ps < boy+5; ++ps)
	{
		printf("%d\t %s \t\t %c \t %f \t\n", ps->num, ps->name, ps->sex, ps->score);
		
	}
}



#include <stdio.h>

struct  stu
{
	int num;
	const char* name;
	char sex;
	float score;
	
}boy[5] = {
	{101,"li ping",'m',45},
{102,"zhang ping", 'm',62.5},
{103,"he fang",'f',92.5},
{104,"cheng ling", 'f',87},
{105,"wangming",'m',58}};


int main(int argc, char* argv[])
{
	int i, c = 0;
	float ave, s = 0;
	for (i=0;i<5;i++)
	{
		s += boy[i].score;
		if (boy[i].score<60)
		{
			c += 1;
		}
	}
	printf("s=%f\n", c);
	ave = s / 5;
	printf("sverage=%f \n count =%d\n", ave, c);
	
}

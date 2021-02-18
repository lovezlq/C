#include <stdio.h>

struct stu
	{
		int num;
	  const	char *name;
		char sex;
		float score;
		
	}boy2,boy1{102,"zhang ping",'M',78.5};


int main(int argc, char* argv[])
{
	boy2 = boy1;
	printf("number=%d \n name=%s \n ", boy2.num, boy2.name);
	printf("sex=%c \n score =%f\n", boy2.sex, boy2.score);
	
}

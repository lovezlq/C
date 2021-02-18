#include <stdio.h>

int main(int argc, char* argv[])
{
	struct stu
	{
		int num;
		const char* name;
		char sex;
		float score;
		
	}boy1,boy2;

	boy1.num = 102;
	boy1.name = "zhang ping";
	printf("input sex and score\n");
	scanf_s("%c %f", &boy1.sex,&boy1.score);
	boy2 = boy1;
	printf("numbers =%d\n name=%s\n", boy2.num, boy2.name);
	printf("sex=%c \n score =%f", boy2.sex, boy2.score);
}

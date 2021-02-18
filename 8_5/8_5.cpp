#include <stdio.h>
#define NUM 3

struct mem
{
	char name[20], phone[11];
	
};

int main(int argc, char* argv[])
{
	struct mem man[NUM];
	int i;
	for (int i = 0; i <NUM ; ++i)
	{
		printf("input name :\n");
		gets_s(man[i].name);
		printf("input phone:\n");
		gets_s(man[i].phone);
		
	}
	printf("name \t \t \t phone\n");
	for (int i = 0; i < NUM; ++i)
	{
		printf("%s\t\t\t%s\n", man[i].name, man[i].phone);
		
	}
}


#include <stdio.h>

int main(int argc, char* argv[])
{
	struct 
	{
		char name[10];
		int age;
		char job;

		union 
		{
			int ccless;
			char office[10];
			
		} depa;
		
	}body[2];

	int n, i;
	for ( i = 0; i < 2; ++i)
	{
		printf("input name ,age,job and department\n");
		scanf_s("%s %d %c", body[i].name, &body[i].age, body[i].job);
		if (body[i].job=='s')
		{
			scanf_s("%d", &body[i].depa.ccless);
			
		}else
		{
			scanf_s("%s", body[i].depa.office);
			
		}

	}
	
		printf("name \t age job class/office\n");

		for ( i = 0; i < 2; ++i)
		{
			if (body[i].job=='s')
			{
				printf("%s\t %3d %3c %s\n", body[i].name, body[i].age,body[i].job,body[i].depa.ccless);
				
			}else
				printf("%s\t %3d %3c %s\n", body[i].name, body[i].age, body[i].job, body[i].depa.office);
		}
	
}

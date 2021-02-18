#include <stdio.h>

int main(int argc, char* argv[])
{
	auto int a, s = 100, p = 100;
	printf("input a number:\n");
	scanf_s("%d", &a);
	if (a>0)
	{
		auto int s, p;
		s = a + a;
		p = a * a;
		printf("s=%d p=%d\n", s, p);
		
	}
	printf("s=%d p=%d\n", s, p);
	
}

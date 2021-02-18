#include <stdio.h>

int main(int argc, char* argv[])
{
	register  i, s = 0;
	for (int i = 0; i < 201; ++i)
	{
		s += i;
		printf("s=%d\n", s);
	}
}

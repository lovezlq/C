#include <stdio.h>

int main(int argc, char* argv[])
{
	int n, s = 0;
	for (n = 1; n <= 100; n++)
		s += n;
	printf("s=%d\n", s);
}

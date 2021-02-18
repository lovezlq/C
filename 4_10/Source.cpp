#include <stdio.h>

int main(int argc, char* argv[])
{
	int n;
	for (int n = 100; n < 1000; ++n)
	{
		if (n%3==0)
		{
			continue;
			
		}printf("%6d", n);
	}
}

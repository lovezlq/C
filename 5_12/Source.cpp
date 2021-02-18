#include <stdio.h>

int main(int argc, char* argv[])
{
	int i;
	void f();
	for (int i = 0; i < 6; ++i)
	{
		f();
	}
}
void f()
{
	auto int j = 0;
	++j;
	printf("%d\n", j);
}

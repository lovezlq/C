#include <stdio.h>

int main(int argc, char* argv[])
{
	enum weekday {sun ,mon ,tre,wed,thu,fri ,sat} a,b,c;

	a = sun;
	b = mon;
	c = thu;
	printf("%d %d %d", a, b, c);
	
}

#include "string.h"
#include <stdio.h>
int main(int argc, char* argv[])
{
	char st1[30] = "My Name is     ";
	char st2[10];
	printf("input your number");
	gets_s(st2);
	strcat_s(st1, st2);

	puts(st1);
}

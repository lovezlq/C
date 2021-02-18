#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
	char st1[15], st2[] = "C Langage";
	strcpy_s(st1, st2);
	puts(st1);
	printf("\n");
}


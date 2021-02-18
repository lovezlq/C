#include <stdio.h>

int main(int argc, char* argv[])
{
	int i = 90, j = 9;
	int* pi, * pj;
	pi = &i;
	pj = &j;
	printf("%d,%d\n", i, j);
	printf("%d,%d\n", &i, &j);
	printf("%d,%d\n", *pi, *pj);
	printf("%d,%d\n", pi, pj);//&i
	printf("%d,%d\n", &(*pi), &*(pj));  //&i
	printf("%d,%d\n", &pi, pj); //ziji
}

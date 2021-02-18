#include <stdio.h>

int main(int argc, char* argv[])
{
	int a = 7;
	int* aptr;
	aptr = &a;
	printf("The address of a is %p\n ", &a);
	printf("The value of aptr is %p \n\n", aptr);
	printf("The value of a is %d \n", a);
	printf("The value of aptr is %d \n\n", *aptr);
	printf("&*aptr =%p\n", &*aptr);
	printf("*&aptr=%p \n", *&aptr);
	printf("*&aptr=%d \n", *&aptr);
	
}

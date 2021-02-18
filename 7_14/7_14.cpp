#include <stdio.h>

int main(int argc, char* argv[])
{
	char *p = "i have 50 yuan", a[20];
	int i = 0;
	for (;*p!='\0';p++)
		if (*p!='0')
		
			a[i++] = *p;
		
	a[i] = '\0';
	printf("the new strings is :%s\n", a);
	
}

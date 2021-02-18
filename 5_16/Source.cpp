#include <stdio.h>

#define LETTER 1

int main(int argc, char* argv[])
{
	char str[20] = "C  Language", c;

	int i;
	i = 0;
	printf("String  is :%s\n", str);
	printf("Change String is:");
	while ((c=str[i])!='\n')
	{
		i++;
		#if LETTER
		if (c>='a'&&c<='z')
		{
			c = c - 32;
		}
		#else
		if (c>='A'&&c<='Z')
		{
			c=c+32
		}
		#endif
		printf("%c", c);

	}
	printf("\n");
	
}


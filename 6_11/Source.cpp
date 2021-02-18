#include <stdio.h>

int main(int argc, char* argv[])
{
	int i, j;
	char a[][5] = { {'B','A','S','I','C'},{'d','B','A','S','E'} };
	for ( i = 0; i <= 1; ++i)
	{
		for ( j = 0; j <= 4; ++j)
		{
			printf("%c", a[i][j]);
			
			
		}printf("\n");
	}
	
}

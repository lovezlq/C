#include <stdio.h>

int main(int argc, char* argv[])
{
	int i, j, s = 0,I, v[3], a[5][3];
	printf("input	score\n");
	for ( i = 0; i < 3; ++i)
	{
		for ( j = 0; j < 5; ++j)
		{
			scanf_s("%d", &a[j][i]);
			s += a[j][i];
		}
		v[i] = s / 5;
		s = 0;
		
	}
	I = (v[0] + v[1] + v[2]) / 3;

	printf("math:%d \nc language :%d \n base :%d\n", v[0], v[1], v[2]);
	printf("total:%d\n",I);
}

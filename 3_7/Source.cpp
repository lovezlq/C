#include <stdio.h>

int main(int argc, char* argv[])
{
	float x;
	scanf_s("%f", &x);
	if (x<0)
	{
		x = -x;
	}
	else
		x = x;
	printf("|x|=%f", x);
	
}

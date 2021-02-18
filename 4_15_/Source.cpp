#include <stdio.h>
int div(int m,int n)
{
	int i;
	if (m<n)
	{
		i < m;
	}else
	{
		i = n;
	
	}
	for (;i>=1;i--)
	{
		if (m%i==0&&n%i==0)
		{
			break;
		}
		
	}return i;
}

int main(int argc, char* argv[])
{
	int a, b, p;
	scanf_s("%d,%d", &a, &b);
	p = div(a, b);
	printf("他们的最大公约数为：%\d\n", p);
}

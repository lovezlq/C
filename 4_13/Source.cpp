#include <stdio.h>

int main(int argc, char* argv[])
{
	int a, b, r, p;
	scanf_s("%d,%d", &a, &b);
	p = a * b;
	r = a % b;
	while (r!=0)
	{
		a = b; b = r; r = a % b;
	}
	p = p / b;
	printf("���ǵ����Լ��Ϊ:%d\n", b);
	printf("���ǵ���С������Ϊ��%d\n", p);
}

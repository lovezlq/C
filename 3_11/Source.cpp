#include <stdio.h>

int main(int argc, char* argv[])
{
	int type, n, number;
	float m;
	printf("����������\n");
	printf("===================\n");
	printf("1,������ 2װ�乤 3���Թ�\n");
	printf("===================\n");
	printf("	�����빤��(1-3):");
	scanf_s("%d", &type);
	printf("�����빤�ź͹�������");
	scanf_s("%d,%d", &number, &n);
	if (type==1)
	{
		m = 200;
	}else if (type==2)
	{
		if (n>800)
		{
			m = 250 + (n - 800) * 0.6;
		}else
		{
			m = 250;
		}
	}else
	{
		if (n>800)
		{
			m = 300 + (n - 800) * 0.6;
		}else
		{
			m = 300;
		}
	}
	printf("����%dӦ�ý���%.2fԪ", number, m);
	
	
}

#include <stdio.h>

int main(int argc, char* argv[])
{
	int type, n, number;
	float m;
	printf("奖金分配管理\n");
	printf("===================\n");
	printf("1,辅助工 2装配工 3调试工\n");
	printf("===================\n");
	printf("	请输入工种(1-3):");
	scanf_s("%d", &type);
	printf("请输入工号和工作量：");
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
	printf("工号%d应得奖金%.2f元", number, m);
	
	
}

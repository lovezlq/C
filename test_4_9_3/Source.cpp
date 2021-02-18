#include <stdio.h>

int main(int argc, char* argv[])
{
	int num ,i;
	float score, max, min, ave;
	printf("请输入学生的人数 num：");
	do
	{
		scanf_s("%d", &num);
		if (num<=0)
		{
			printf("学生人数不能为负数");
			printf("请重新输入学生的人数num:");
		}
	}
	while (num<=0);

	printf("请输入学生的《C语言程序设计》课程成绩\n", num);
	scanf_s("%f", &score);
	max = min = ave = score;
	for (i=2;i<num;i++)
	{
		if (max<score)
	{
		max = score;
	}
	if (min>score)
	{
		min = score;
	}
	ave += score;
	}
	ave = ave / num;

	printf("------------学生成绩管理系统---------------\n");
	printf("学生成绩统计分析如下：\n", num);
	printf("学生成绩中最高分是 %.1f分\n", max);
	printf("学生成绩中最低分是 %.1f分\n", min);
	printf("学生成绩平均分是 %.1f分\n", ave);
	
}

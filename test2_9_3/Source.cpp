#include <stdio.h>

int main(int argc, char* argv[])
{

	printf("\n==============================高校学生成绩管理系统====================================\n");
	printf("-----------------------------");
	printf("1.学生成绩录入            2.学生成绩查询 \n");
	printf("3.学生成绩统计            4.学生资料删除 \n");
	printf("5.学生资料修改            6.学生成绩插入 \n");
	printf("           0.系统退出           \n");

	printf("-----------------------------");

	printf("请您根据需要选择（0-6）    \n");
	printf("1.学生成绩录入\n");
	printf("请录入一个学生的4门课程的成绩\n");

	float x, y, z, m, ave;
	printf("大学数学：");
	scanf_s("%f", &x);
	printf("大学英语：");
	scanf_s("%f", &y);

	printf("大学政治：");
	scanf_s("%f", &z);
	printf("大学体育：");
	scanf_s("%f", &m);
	ave = (x + z + y + m) / 4;

	printf("学生的成绩信息 ：\n");
	printf("大学数学\t大学英语 \t大学政治 \t大学体育 平均分 \n");
	printf("%lf \t %lf \t %lf\t %lf \t %lf\n", x, y, z, m, ave);



}


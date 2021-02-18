#include <stdio.h>

int main(int argc, char* argv[])
{
	int t;

	printf("=====================高校学生成绩管理系统=========================\n");
	printf("------------------------------------\n");
	printf("1.学生成绩录入      2.学生成绩查询\n");
	printf("3.学生成绩统计      4.学生资料删除\n");
	printf("5.学生资料修改      6.学生成绩插入\n");
	printf("------------------------------------\n");
	printf("请根据需要选择 0-6：     \n");
	scanf_s("%d", &t);
	switch (t)
	{
	case 1:printf("进入学生成绩录入功能模块");break;
	case 2:printf("进入学生成绩查询功能模块");break;
	case 3:printf("进入学生成绩统计功能模块");break;
	case 4:printf("进入学生资料删除功能模块");break;
	case 5:printf("进入学生资料修改功能模块");break;
	case 6:printf("进入学生成绩插入功能模块");break;
	default:printf("选择错误");
	}
	
}

#include <stdio.h>

int main(int argc, char* argv[])
{
	int PushButton;
	printf("=============================\n");
	printf("==职业技术学院管理信息系统==\n");
	printf("=============================\n");
	printf("==        1.学生管理         ==\n");
	printf("==        2.教师管理         ==\n");
	printf("==        3.课程管理         ==\n");
	printf("==        4.成绩管理         ==\n");
	printf("==        5.退出系统         ==\n");
	printf("=============================\n");

	printf("请输入1-5按钮选择菜单项：");
	scanf_s("%d", &PushButton);
	switch (PushButton)
	{
	case 1:printf("进入学生管理\n");break;
	case 2:printf("进入教师管理\n");break;
	case 3:printf("进入课程管理\n");break;
	case 4:printf("进入成绩管理\n");break;
	case 5:printf("退出管理系统\n");break;
	default:printf("选择项错误;");
	}
	
}

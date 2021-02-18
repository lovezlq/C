#include <stdio.h>

struct StuNode
{
	int num;
	char name[18];
	int age;
	float score;

	struct StuNode* next;
};

int main(int argc, char* argv[])
{
	struct StuNode stu1 = { 1001,"王聪",18,19 },
		stu2 = { 1002,"李玲",17,94 },
		stu3 = { 1003,"田丽",20,88 };
	struct StuNode *head, *p;
	head = &stu1;
	stu1.next = &stu2;
	stu2.next = &stu3;
	stu3.next = NULL;
	printf("请通过链表输出学生的信息如下:\n");
	p = head;
	while (p!=NULL)
	{
		printf("学生编号：%d\t 姓名 :%s\t 年龄：%d\t 成绩：%f \n",p->num,p->name,p->age,p->score);
		p = p->next;
		
	}
}


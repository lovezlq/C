#include <stdio.h>
#include <malloc.h>

typedef struct node
{
	char name[20];
	struct node* next;
}stud;

stud *creat(int n)
{
	stud *p, *head, *s;
	int i;
	if ((head=(stud *)malloc(sizeof(stud)))==NULL)
	{
		printf("不能分配空间！");
		return NULL;
		
	}
	head->name[0] = '\0';
	head->next = NULL;
	p = head;
	for ( i = 0; i < n; ++i)
	{
		if ((s=(stud *)malloc(sizeof(stud)))==NULL)
		{
			printf("不能分配内存空间!");
			return NULL;
			
		}
		p->next = s;
		printf("请输出第%d 个人姓名:", i + 1);
		scanf_s("%s", s->name);
		s->next = NULL;
		p = s;
	}
	return (head);
}

void output(node* h)
{
	struct node *p;
	p = h;
	printf("按照顺序输出每个节点存放的姓名：\n");
	p = p->next;
	while (p!=NULL)
	{
		printf("%s\t", p->name);
		p = p->next;
		
	}
	printf("\n");
	
	
}

int main(int argc, char* argv[])
{
	int number;
	stud* head;
	printf("从键盘上输入学生人数:");
	scanf_s("%d", &number);
	head = creat(number);
	output(head);
	
}


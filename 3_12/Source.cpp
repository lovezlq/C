#include <stdio.h>

int main(int argc, char* argv[])
{
	int PushButton;
	printf("=============================\n");
	printf("==ְҵ����ѧԺ������Ϣϵͳ==\n");
	printf("=============================\n");
	printf("==        1.ѧ������         ==\n");
	printf("==        2.��ʦ����         ==\n");
	printf("==        3.�γ̹���         ==\n");
	printf("==        4.�ɼ�����         ==\n");
	printf("==        5.�˳�ϵͳ         ==\n");
	printf("=============================\n");

	printf("������1-5��ťѡ��˵��");
	scanf_s("%d", &PushButton);
	switch (PushButton)
	{
	case 1:printf("����ѧ������\n");break;
	case 2:printf("�����ʦ����\n");break;
	case 3:printf("����γ̹���\n");break;
	case 4:printf("����ɼ�����\n");break;
	case 5:printf("�˳�����ϵͳ\n");break;
	default:printf("ѡ�������;");
	}
	
}

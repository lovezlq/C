#include <stdio.h>

int main(int argc, char* argv[])
{
	int t;

	printf("=====================��Уѧ���ɼ�����ϵͳ=========================\n");
	printf("------------------------------------\n");
	printf("1.ѧ���ɼ�¼��      2.ѧ���ɼ���ѯ\n");
	printf("3.ѧ���ɼ�ͳ��      4.ѧ������ɾ��\n");
	printf("5.ѧ�������޸�      6.ѧ���ɼ�����\n");
	printf("------------------------------------\n");
	printf("�������Ҫѡ�� 0-6��     \n");
	scanf_s("%d", &t);
	switch (t)
	{
	case 1:printf("����ѧ���ɼ�¼�빦��ģ��");break;
	case 2:printf("����ѧ���ɼ���ѯ����ģ��");break;
	case 3:printf("����ѧ���ɼ�ͳ�ƹ���ģ��");break;
	case 4:printf("����ѧ������ɾ������ģ��");break;
	case 5:printf("����ѧ�������޸Ĺ���ģ��");break;
	case 6:printf("����ѧ���ɼ����빦��ģ��");break;
	default:printf("ѡ�����");
	}
	
}

#include <stdio.h>

int main(int argc, char* argv[])
{
	int num ,i;
	float score, max, min, ave;
	printf("������ѧ�������� num��");
	do
	{
		scanf_s("%d", &num);
		if (num<=0)
		{
			printf("ѧ����������Ϊ����");
			printf("����������ѧ��������num:");
		}
	}
	while (num<=0);

	printf("������ѧ���ġ�C���Գ�����ơ��γ̳ɼ�\n", num);
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

	printf("------------ѧ���ɼ�����ϵͳ---------------\n");
	printf("ѧ���ɼ�ͳ�Ʒ������£�\n", num);
	printf("ѧ���ɼ�����߷��� %.1f��\n", max);
	printf("ѧ���ɼ�����ͷ��� %.1f��\n", min);
	printf("ѧ���ɼ�ƽ������ %.1f��\n", ave);
	
}

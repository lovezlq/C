#include <stdio.h>

int main(int argc, char* argv[])
{

	printf("\n==============================��Уѧ���ɼ�����ϵͳ====================================\n");
	printf("-----------------------------");
	printf("1.ѧ���ɼ�¼��            2.ѧ���ɼ���ѯ \n");
	printf("3.ѧ���ɼ�ͳ��            4.ѧ������ɾ�� \n");
	printf("5.ѧ�������޸�            6.ѧ���ɼ����� \n");
	printf("           0.ϵͳ�˳�           \n");

	printf("-----------------------------");

	printf("����������Ҫѡ��0-6��    \n");
	printf("1.ѧ���ɼ�¼��\n");
	printf("��¼��һ��ѧ����4�ſγ̵ĳɼ�\n");

	float x, y, z, m, ave;
	printf("��ѧ��ѧ��");
	scanf_s("%f", &x);
	printf("��ѧӢ�");
	scanf_s("%f", &y);

	printf("��ѧ���Σ�");
	scanf_s("%f", &z);
	printf("��ѧ������");
	scanf_s("%f", &m);
	ave = (x + z + y + m) / 4;

	printf("ѧ���ĳɼ���Ϣ ��\n");
	printf("��ѧ��ѧ\t��ѧӢ�� \t��ѧ���� \t��ѧ���� ƽ���� \n");
	printf("%lf \t %lf \t %lf\t %lf \t %lf\n", x, y, z, m, ave);



}


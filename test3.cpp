# include <stdio.h>
# include <math.h>
# include <stdlib.h>

int main(void)
{
	//������ϵ�����浽�������
	int a = 0;  //=����ʾ��ȣ���ʾ��ֵ
	int b = 0;
	int c = 0;
	double delta; //delt��ŵ��� b*b - 4*a*c
	double x1; //���һԪ���η��̵�����һ����
	double x2; //���һԪ���η��̵�����һ����
	printf("������һԪ���η��̵�����ϵ��\n");
	scanf_s("%d %d %d", &a, &b, &c);

	delta = b * b - 4 * a * c;

	if (delta > 0)
	{
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		printf("��һԪ���η�����������, x1 = %f, x2 = %f\n", x1, x2);
	}
	else if (delta == 0)
	{
		x1 = (-b) / (2 * a);
		x2 = x1;  //�ұ߸������
		printf("��һԪ���η�����һ��Ψһ��, x1 = x2 = %f\n", x1);
	}
	else
	{
		printf("�޽�\n");
	}

	system("pause");

	return 0;
}
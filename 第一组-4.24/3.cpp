# include <stdio.h>

int main(void)
{
	int a, n;//a�����֣�n�Ǵ���
	int sn = 0, tn = 0;//sn���ۻ��͵�ֵ��tn�Ǽ���ڼ�λʱֵ�Ƕ��٣�
	int i;//ѭ������
	scanf_s("%d %d", &a, &n);

	//��һ����ͷ�ʽ
	for (i = 1; i <= n; i++)
	{
		tn = tn + a;//�ڼ�λʱֵ�Ƕ���
		a = a * 10;
		sn = sn + tn;
	}
	//�ڶ�����ͷ�ʽ
	/*
	for (i = 1; i <= n; i++)2
	{
		tn = tn * 10;//��һ�������һ�䲻�ܽ���
		tn = tn + a;
		sn = sn + tn;
	}
	*/
	printf("%d", sn);

	return 0;

}
# include <stdio.h>
#include <malloc.h>

int sum_1(int* a, int b);

int main(void)
{
	int m_people = 0, sum = 0, average = 0;
	printf("������ѧ���������ѧ���ɼ���");
	scanf("%d", &m_people);
	int* m_number = (int*)malloc(m_people);//��������һ�ֶ�̬����  ������5���� ���ͻ����5��int�ռ䴢��ɼ�
	int j = 0;

	for (int i = 0; i < m_people; i++)/*forѭ�������Ƕ���һ��ѭ������i��Ҳ����֮ǰ���壬Ȼ��ִ���ж���䣬������ִ�������������ģ�Ȼ�󷵻�ִ��i++��
	��ִ���жϡ�								  */
	{
		scanf("%d", &m_number[j]);
		j = j + 1;
	}
	sum = sum_1(m_number, m_people);
	printf("ѧ���ܳɼ���%d\n", sum);
	printf("ƽ���ɼ���%d\n", (sum / m_people));


	return 0;
}

int sum_1(int* a, int b)
{
	int d = 0;
	for (int i = 0; i < b; i++)
	{
		d += a[i];
	}
	return d;
}

# include <stdio.h>

int main(void)
{
	int m_num = -11;
	int m_num_1 = 5;

	printf("negative: %d\n", m_num % m_num_1);
	printf("positive: %d\n", (m_num % m_num_1) + m_num_1);//ȡ������Ϊԭ���������ϳ���

	return 0;
}
/*
��������
negative: -1
positive: 4 ����������
*/
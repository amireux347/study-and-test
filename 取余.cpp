# include <stdio.h>

int main(void)
{
	int m_num = -11;
	int m_num_1 = 5;

	printf("negative: %d\n", m_num % m_num_1);
	printf("positive: %d\n", (m_num % m_num_1) + m_num_1);//取正余数为原先余数加上除数

	return 0;
}
/*
输出结果：
negative: -1
positive: 4 （正余数）
*/
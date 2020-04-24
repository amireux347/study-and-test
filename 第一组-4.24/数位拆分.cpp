# include <stdio.h>

int main(void)
{
	int m_number = 4321;
	int m_thousand, m_hundred, m_ten, m_single;
	int m_number_1, m_number_2;

	m_thousand = m_number / 1000;
	m_hundred = (m_number / 100) % 10;
	m_ten = (m_number / 10) % 10;
	m_single = m_number % 10;

	m_number_1 = (m_thousand * 10) + m_hundred;
	m_number_2 = (m_ten * 10) + m_single;
	float m_number_3 = ((float)(m_number_1) / (float)(m_number_2));

	printf("a=%d,b=%d\n", m_number_1, m_number_2);
	printf("a+b=%d\n", m_number_1 + m_number_2);
	printf("a-b=%d\n", m_number_1 - m_number_2);
	printf("a*b=%d\n", m_number_1 * m_number_2);
	printf("a/b=%.2f\n", m_number_3);
	printf("a%%b=%d\n", m_number_1 % m_number_2);

	return 0;
}
# include <stdio.h>
# include <math.h>

int main(void)
{
	int m_Integer, m_hundreds, m_Ten, m_Singles;
	printf("Input x:\n");
	scanf_s("%d", &m_Integer);

	m_Integer = abs(m_Integer);	
	m_hundreds = m_Integer / 100;
	m_Ten = m_Integer / 10 % 10;
	m_Singles = m_Integer % 10;
	m_Integer = m_Singles * 100 + m_Ten * 10 + m_hundreds;
	printf("%d\n", m_Integer);

	return 0;
}
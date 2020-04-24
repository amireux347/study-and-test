# include <stdio.h>
# include <math.h>

int main(void)
{
	int m_year;
	double m_rate, m_capter, m_deposit;
	printf("Please enter rate, year, capital:\n");
	scanf_s("%lf,%d,%lf", &m_rate, &m_year, &m_capter);


	double m_rate_1 = pow((1 + m_rate), m_year);
	m_deposit = m_capter * m_rate_1;
	printf("deposit=%.3f\n", m_deposit);

	return 0;
}
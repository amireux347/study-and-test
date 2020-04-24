# include <stdio.h>
# include <math.h>
#pragma warning(disable : 4996)

int main(void)
{
	int number, twice, twice_1;
	int sum = 0, sum_1 = 1, sum_2 = 0;
	int number_1, number_2, N, N1;
	scanf("%d %d", &number, &twice);
	N = twice - 1;
	twice_1 = twice;

	for (int j = 1; j <= (twice - 1); j++)
	{
		sum_1 = sum_1 * j;
	}
	for (int k = 1; k <= twice; k++)
	{
		N1 = N;
		sum = 0;
		for (int i = 1; i < twice_1; i++)
		{
			number_2 = pow(10, N1);
			number_1 = number * number_2;
			sum = sum + number_1;
			N1 = N1 - 1;
		}
		N = N - 1;
		twice_1 = twice - 1;
		sum_2 = sum + sum_2 + number;
	}
	printf("%d", (sum_2 - number*2));

	return 0;
}
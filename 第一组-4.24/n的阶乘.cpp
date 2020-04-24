# include <stdio.h>

int main(void)
{
	int sum = 0, i = 100;
	do
	{
		sum = sum + i;
		i = i + 2;
	}
	while (i <= 400);
	printf("%d", sum);


	return 0;
}
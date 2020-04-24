# include <stdio.h>

int main(void)
{
	int year;
	printf("请输入要判断的年份\n");
	scanf("%d", &year);

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		printf("%d是闰年\n", year);
	}
	else
	{
		printf("%d不是闰年\n");
	}

	return 0;
}
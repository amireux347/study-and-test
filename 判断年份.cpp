# include <stdio.h>

int main(void)
{
	int year;
	printf("������Ҫ�жϵ����\n");
	scanf("%d", &year);

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		printf("%d������\n", year);
	}
	else
	{
		printf("%d��������\n");
	}

	return 0;
}
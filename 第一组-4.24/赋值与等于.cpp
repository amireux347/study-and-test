/*
2020/4/11
输出一个数字以其以下所有被5整除的数的乘积
*/
# include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int number = 0;
	int number_1 = 0, prd = 1;
	int i;
	scanf("%d", &number);
	number_1 = (number - 1);

	if ((number % 5) == 0)
	{
		prd = number;
	}
	for (i = 2; i < number; i++)
	{
		if ((number_1 % 5) == 0)
		{
			prd = (prd * number_1);//注意赋值与等于对最后结果的影响
		}
		number_1 = (number_1 - 1);
	
	}
	printf("%d\n", prd);

	return 0;
}
/*
如果24行使用== 那么并未改变静态变量prd的值，
需要使用=，才能改变变量的值
*/
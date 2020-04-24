# include <stdio.h>

int main(void)
{
	int a, n;//a是数字，n是次数
	int sn = 0, tn = 0;//sn是累积和的值，tn是计算第几位时值是多少！
	int i;//循环变量
	scanf_s("%d %d", &a, &n);

	//第一种求和方式
	for (i = 1; i <= n; i++)
	{
		tn = tn + a;//第几位时值是多少
		a = a * 10;
		sn = sn + tn;
	}
	//第二种求和方式
	/*
	for (i = 1; i <= n; i++)2
	{
		tn = tn * 10;//这一句和下面一句不能交换
		tn = tn + a;
		sn = sn + tn;
	}
	*/
	printf("%d", sn);

	return 0;

}
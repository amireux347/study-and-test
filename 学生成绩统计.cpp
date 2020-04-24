# include <stdio.h>
#include <malloc.h>

int sum_1(int* a, int b);

int main(void)
{
	int m_people = 0, sum = 0, average = 0;
	printf("请输入学生人数与各学生成绩：");
	scanf("%d", &m_people);
	int* m_number = (int*)malloc(m_people);//这个语句是一种动态定义  假如是5个人 它就会分配5个int空间储存成绩
	int j = 0;

	for (int i = 0; i < m_people; i++)/*for循环，先是定义一个循环变量i，也可以之前定义，然后执行判断语句，成立就执行下面大括号里的，然后返回执行i++，
	再执行判断。								  */
	{
		scanf("%d", &m_number[j]);
		j = j + 1;
	}
	sum = sum_1(m_number, m_people);
	printf("学生总成绩是%d\n", sum);
	printf("平均成绩是%d\n", (sum / m_people));


	return 0;
}

int sum_1(int* a, int b)
{
	int d = 0;
	for (int i = 0; i < b; i++)
	{
		d += a[i];
	}
	return d;
}

/*
2020/4/11
���һ�����������������б�5���������ĳ˻�
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
			prd = (prd * number_1);//ע�⸳ֵ����ڶ��������Ӱ��
		}
		number_1 = (number_1 - 1);
	
	}
	printf("%d\n", prd);

	return 0;
}
/*
���24��ʹ��== ��ô��δ�ı侲̬����prd��ֵ��
��Ҫʹ��=�����ܸı������ֵ
*/
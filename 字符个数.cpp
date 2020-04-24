#include<stdio.h>

int main()
{
	char c;
	int i = 0;	
	int k = 0;
	int j = 0;
	int m = 0;//定义三个变量，储存三种类型字符个数
	while ((c = getchar()) != '\n') /*getcher类似scanf，直接储存所输入的东西，然后enter键结束，c = getchar() != '\n'代表
	清除回车后的储存字符								*/
	{
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
			i++;
		else if (c >= '0' && c <= '9')
			k++;
		else if (c == ' ')
			j++;
		else
			m++;
		
	}
	printf("%d %d %d %d", i, k, j, m);

	return 0;
}


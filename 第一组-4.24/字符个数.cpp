#include<stdio.h>

int main()
{
	char c;
	int i = 0;	
	int k = 0;
	int j = 0;
	int m = 0;//���������������������������ַ�����
	while ((c = getchar()) != '\n') /*getcher����scanf��ֱ�Ӵ���������Ķ�����Ȼ��enter��������c = getchar() != '\n'����
	����س���Ĵ����ַ�								*/
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


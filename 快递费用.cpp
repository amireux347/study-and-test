# include <stdio.h>

int main(void)
{
	int a = 0, wei_1 = 0;
	float wei = 0, price = 0;
	scanf("%d,%f", &a, &wei);
	
	if (wei - (int)wei == 0)
	{
		wei_1 = wei;
	}
	else
	{
		wei_1 = (int)wei + 1;
	}

	if (a == 0)
	{
		price = 10 + ((wei_1 - 1) * 3);
		printf("Price: %.2f\n", price);
	}
	else if (a == 1)
	{
		price = 10 + ((wei_1 - 1) * 4);
		printf("Price: %.2f\n", price);
	}
	else if (a == 2)
	{
		price = 15 + ((wei_1 - 1) * 5);
		printf("Price: %.2f\n", price);
	}
	else if (a == 3)
	{
		price = 15 + ((wei_1 - 1) * 6.5);
		printf("Price: %.2f\n", price);
	}
	else if (a == 4)
	{
		price = 15 + ((wei_1 - 1) * 10);
		printf("Price: %.2f\n", price);
	}
	else
	{
		printf("Error in Area\n");
		printf("Price: 0.00\n");
	}

	return 0;
}
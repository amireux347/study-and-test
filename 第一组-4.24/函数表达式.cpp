/*
该函数表达式为y=1/(x+2）（-5<x<0&&x!=-2）; 
            y=1/(x+5)  (0<= x <5); 
			y=1/(x+12)  (5<= x <10);
			y=0  (x<=-5||x=-2||x>=10);
*/
# include <stdio.h>

int main(void)
{
	double x, y;
	printf("input x=");
	scanf("%lf", &x);

	if ((x > -5.0 && x < 0.0) && x != -2.0)
	{
		y = 1.0 / (x + 2.0);
	}
	else if (x >= 0.0 && x < 5.0)
	{
		y = 1.0 / (x + 5.0);
	}
	else if (x >= 5.0 && x < 10.0)
	{
		y = 1.0 / (x + 12.0);
	}
	else
	{
		y = 0.0;
	}

	printf("x=%f\n y=%f\n", x, y);


	return 0;
}
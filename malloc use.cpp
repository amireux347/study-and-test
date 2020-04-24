# include <stdio.h>
# include <stdlib.h>

void f(int ** q)
{
	*q = (int * )malloc(sizeof(int));
	**q = 5;

}


int main(void)
{
	int *p;
	
	f(&p);
	printf("%d", *p);

	return 0;
}
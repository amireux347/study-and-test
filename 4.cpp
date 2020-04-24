# include <stdio.h>

int main(void)
{
    int nu = 0, sum = 0;

    scanf_s("%d", &nu);

    for (int i = 1; i < nu; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            if(i % j == 0&& i != j)
            {
                break;
            }
            if (i == j)
            {
                sum = sum + i;
            }
        }
    }
    printf("%d", sum);

    return 0;
}
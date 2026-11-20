#include <stdio.h>

int is_prime(int x)
{
    if (x < 2)
    {
        return 0;
    }

    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main(void)
{
    int n;
    int count = 0;

    scanf("%d", &n);

    if (n > 10000)
    {
        printf("NG");
        return 0;
    }

    for (int i = 2; i <= n; i++)
    {
        if (is_prime(i))
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
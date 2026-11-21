
#include <stdio.h>

int isPerfectSquare(long long n)
{
    if (n < 0)
    {
        return 0;
    }

    for (long long i = 0; i <= n / (i == 0 ? 1 : i); i++)
    {
        if (i * i == n)
        {
            return 1;
        }

        if (i != 0 && i > n / i)
        {
            break;
        }
    }

    return 0;
}

int main()
{
    long long n;

    printf("Enter a number: ");
    scanf("%lld", &n);

    int result = isPerfectSquare(n);

    printf("%d\n", result);

    return 0;
}


#include <stdio.h>

int main()
{
    long long x, result;

    printf("Enter the value of x: ");
    scanf("%lld", &x);

    if (x < 0)
    {
        result = x * x + 2 * x + 1;
    }
    else if (x >= 0 && x < 10)
    {
        result = 3 * x + 2;
    }
    else
    {
        result = 5 * x - 7;
    }

    printf("f(x) = %lld\n", result);

    return 0;
}

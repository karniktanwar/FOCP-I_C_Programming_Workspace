
#include <stdio.h>

long long gcd(long long a, long long b)
{
    // Convert negative numbers into positive numbers
    if (a < 0)
        a = -a;

    if (b < 0)
        b = -b;

    while (b != 0)
    {
        long long remainder = a % b;

        a = b;
        b = remainder;
    }

    return a;
}

int main()
{
    long long a, b;

    printf("Enter two integers: ");
    scanf("%lld %lld", &a, &b);

    if (a == 0 && b == 0)
    {
        printf("Both numbers cannot be zero.\n");
        return 1;
    }

    printf("GCD = %lld\n", gcd(a, b));

    return 0;
}

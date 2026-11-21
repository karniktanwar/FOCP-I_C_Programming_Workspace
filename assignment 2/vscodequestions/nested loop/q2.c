
#include <stdio.h>

long long gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long temp = a % b;
        a = b;
        b = temp;
    }

    return a;
}

int countRelativelyPrime(int n, int m)
{
    int count = 0;

    for (int x = 1; x <= m; x++)
    {
        if (gcd(x, n) == 1)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int n, m;

    printf("Enter n and m: ");
    scanf("%d %d", &n, &m);

    if (n <= 0 || m < 0)
    {
        printf("Enter n > 0 and m >= 0.\n");
        return 1;
    }

    int result = countRelativelyPrime(n, m);

    printf("Count = %d\n", result);

    return 0;
}


#include <stdio.h>

int maxOfThree(int a, int b, int c)
{
    int max = a;

    if (b > max)
    {
        max = b;
    }

    if (c > max)
    {
        max = c;
    }

    return max;
}

int main()
{
    int a, b, c;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    int result = maxOfThree(a, b, c);

    printf("Largest number = %d\n", result);

    return 0;
}

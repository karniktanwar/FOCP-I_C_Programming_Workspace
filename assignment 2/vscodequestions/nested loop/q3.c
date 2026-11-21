
#include <stdio.h>

int main()
{
    int N;
    int found = 0;

    printf("Enter N: ");
    scanf("%d", &N);

    if (N < 1)
    {
        printf("None\n");
        return 0;
    }

    for (int a = 1; a <= N; a++)
    {
        for (int b = a + 1; b <= N; b++)
        {
            for (int c = b + 1; c <= N; c++)
            {
                long long x = (long long)a * a;
                long long y = (long long)b * b;
                long long z = (long long)c * c;

                if (x + y == z)
                {
                    printf("%d %d %d\n", a, b, c);
                    found = 1;
                }
            }
        }
    }

    if (found == 0)
    {
        printf("None\n");
    }

    return 0;
}

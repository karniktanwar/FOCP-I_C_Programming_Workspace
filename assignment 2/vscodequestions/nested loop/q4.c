
#include <stdio.h>

int digitSum(long long num)
{
    int sum = 0;

    while (num > 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }

    return sum;
}

int main()
{
    int n;
    long long arr[1000];
    int count = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 0 || n > 1000)
    {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter array elements: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);

        if (arr[i] <= 0)
        {
            printf("Enter positive integers only.\n");
            return 1;
        }
    }

    // Check all possible pairs
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (digitSum(arr[i]) == digitSum(arr[j]))
            {
                count++;
            }
        }
    }

    printf("Pair count = %d\n", count);

    return 0;
}

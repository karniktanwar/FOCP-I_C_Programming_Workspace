
#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    long long arr[1000];
    unsigned long long minDiff = ULLONG_MAX;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 2 || n > 1000)
    {
        printf("Invalid array size. Enter n between 2 and 1000.\n");
        return 1;
    }

    printf("Enter array elements: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    // Check every distinct pair
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            unsigned long long diff;

            if (arr[i] >= arr[j])
            {
                diff = (unsigned long long)arr[i]
                     - (unsigned long long)arr[j];
            }
            else
            {
                diff = (unsigned long long)arr[j]
                     - (unsigned long long)arr[i];
            }

            if (diff < minDiff)
            {
                minDiff = diff;
            }
        }
    }

    printf("Minimum difference = %llu\n", minDiff);

    return 0;
}

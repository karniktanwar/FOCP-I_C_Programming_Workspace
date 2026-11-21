
#include <stdio.h>

int main()
{
    int n, target;
    int arr[1000];
    int count = 0;

    printf("Enter n and target: ");
    scanf("%d %d", &n, &target);

    if (n < 0 || n > 1000)
    {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter array elements: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Check all possible pairs
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((long long)arr[i] + arr[j] == target)
            {
                count++;
            }
        }
    }

    printf("Number of pairs = %d\n", count);

    return 0;
}

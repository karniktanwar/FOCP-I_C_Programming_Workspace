
#include <stdio.h>

int main()
{
    int n;
    int arr[1000];

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 1 || n > 1000)
    {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter array elements: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int currentLength = 1;
    int maxLength = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            currentLength++;
        }
        else
        {
            currentLength = 1;
        }

        if (currentLength > maxLength)
        {
            maxLength = currentLength;
        }
    }

    printf("Maximum run length = %d\n", maxLength);

    return 0;
}

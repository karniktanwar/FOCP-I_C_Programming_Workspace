
#include <stdio.h>

int main()
{
    int r, c;
    long long arr[100][100];

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    if (r < 1 || r > 100 || c < 1 || c > 100)
    {
        printf("Invalid matrix size.\n");
        return 1;
    }

    printf("Enter matrix elements:\n");

    // Input matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%lld", &arr[i][j]);
        }
    }

    // Calculate and print row sums
    for (int i = 0; i < r; i++)
    {
        long long sum = 0;

        for (int j = 0; j < c; j++)
        {
            sum += arr[i][j];
        }

        printf("%lld ", sum);
    }

    printf("\n");

    // Calculate and print column sums
    for (int j = 0; j < c; j++)
    {
        long long sum = 0;

        for (int i = 0; i < r; i++)
        {
            sum += arr[i][j];
        }

        printf("%lld ", sum);
    }

    printf("\n");

    return 0;
}


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

    int count = 0;

    // Check every cell
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int isPeak = 1;

            // Check upper neighbour
            if (i > 0 && arr[i][j] <= arr[i - 1][j])
            {
                isPeak = 0;
            }

            // Check lower neighbour
            if (i < r - 1 && arr[i][j] <= arr[i + 1][j])
            {
                isPeak = 0;
            }

            // Check left neighbour
            if (j > 0 && arr[i][j] <= arr[i][j - 1])
            {
                isPeak = 0;
            }

            // Check right neighbour
            if (j < c - 1 && arr[i][j] <= arr[i][j + 1])
            {
                isPeak = 0;
            }

            if (isPeak == 1)
            {
                count++;
            }
        }
    }

    printf("Number of peaks = %d\n", count);

    return 0;
}

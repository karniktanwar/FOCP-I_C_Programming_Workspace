
#include <stdio.h>

int main()
{
    int r, c;
    long long matrix[100][100];

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
            scanf("%lld", &matrix[i][j]);
        }
    }

    int found = 0;

    // Check every cell in row-major order
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int isMinimum = 1;
            int isMaximum = 1;

            // Check whether it is minimum in its row
            for (int k = 0; k < c; k++)
            {
                if (matrix[i][k] < matrix[i][j])
                {
                    isMinimum = 0;
                    break;
                }
            }

            // Check whether it is maximum in its column
            for (int k = 0; k < r; k++)
            {
                if (matrix[k][j] > matrix[i][j])
                {
                    isMaximum = 0;
                    break;
                }
            }

            // Both conditions must be satisfied
            if (isMinimum && isMaximum)
            {
                printf("%d %d %lld\n", i, j, matrix[i][j]);
                found = 1;
                break;
            }
        }

        if (found)
        {
            break;
        }
    }

    if (!found)
    {
        printf("None\n");
    }

    return 0;
}

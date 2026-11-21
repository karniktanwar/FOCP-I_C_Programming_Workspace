
#include <stdio.h>

int main()
{
    int n;
    long long matrix[100][100];
    int symmetric = 1;

    printf("Enter matrix size: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid matrix size.\n");
        return 1;
    }

    printf("Enter matrix elements:\n");

    // Input matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%lld", &matrix[i][j]);
        }
    }

    // Check symmetry
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                symmetric = 0;
                break;
            }
        }

        if (symmetric == 0)
        {
            break;
        }
    }

    if (symmetric == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}

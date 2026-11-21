
#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];

    printf("Enter a string: ");
    scanf("%999s", str);

    int n = strlen(str);
    int i = 0;

    while (i < n)
    {
        char current = str[i];
        int count = 0;

        // Count consecutive repeated characters
        while (i < n && str[i] == current)
        {
            count++;
            i++;
        }

        // Print character and its frequency
        printf("%c%d", current, count);
    }

    printf("\n");

    return 0;
}

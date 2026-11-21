
#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[1000];

    int vowels = 0;
    int consonants = 0;
    int digits = 0;
    int spaces = 0;

    printf("Enter a line: ");

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        // Check vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' ||
            ch == 'O' || ch == 'U')
        {
            vowels++;
        }

        // Check consonants
        else if (isalpha((unsigned char)ch))
        {
            consonants++;
        }

        // Check digits
        else if (isdigit((unsigned char)ch))
        {
            digits++;
        }

        // Check spaces
        else if (ch == ' ')
        {
            spaces++;
        }
    }

    printf("%d %d %d %d\n",
           vowels, consonants, digits, spaces);

    return 0;
}

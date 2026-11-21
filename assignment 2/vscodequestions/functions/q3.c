
#include <stdio.h>

int rectangleArea(int length, int width)
{
    int area = length * width;

    return area;
}

int main()
{
    int length, width;

    printf("Enter length and width: ");
    scanf("%d %d", &length, &width);

    if (length < 0 || width < 0)
    {
        printf("Length and width cannot be negative.\n");
        return 1;
    }

    int result = rectangleArea(length, width);

    printf("Area of rectangle = %d\n", result);

    return 0;
}

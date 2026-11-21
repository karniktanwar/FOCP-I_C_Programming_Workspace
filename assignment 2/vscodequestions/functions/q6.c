
#include <stdio.h>

int main()
{
    long long totalSeconds;

    printf("Enter total seconds: ");
    scanf("%lld", &totalSeconds);

    if (totalSeconds < 0)
    {
        printf("Seconds cannot be negative.\n");
        return 1;
    }

    long long hours = totalSeconds / 3600;

    long long remainingSeconds = totalSeconds % 3600;

    long long minutes = remainingSeconds / 60;

    long long seconds = remainingSeconds % 60;

    printf("%lld %lld %lld\n", hours, minutes, seconds);

    return 0;
}

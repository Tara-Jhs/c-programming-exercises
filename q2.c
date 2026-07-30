#include <stdio.h>
#include "sleep.h"

int main(void)
{
    int wake_time, sleep_time;
    int irregular_nights = 0;
    int low_sleep_nights = 0;
    int total_sleep = 0;
    float average_sleep;
    int n;
    scanf("%d", &n);
    if (n <= 0 || n > 365)
    {
        printf("invalid n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        if (scanf("%4d-%4d", &sleep_time, &wake_time) != 2)
        {
            return 1;
        }

        int sleep_minutes = calculate_sleep_minutes(sleep_time, wake_time);
        total_sleep += sleep_minutes;

        if (sleep_minutes < 360)
        {
            low_sleep_nights++;
        }

        irregular_nights += is_irregular(sleep_time, wake_time);
    }

    average_sleep = (float)total_sleep / n;

    printf("\nTotal Sleep : %d minutes", total_sleep);
    printf("\nAverage Sleep : %.2f minutes", average_sleep);
    printf("\nLow Sleep Nights : %d", low_sleep_nights);
    printf("\nIrregular Nights : %d", irregular_nights);

    return 0;
}

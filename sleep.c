#include "sleep.h"

int calculate_sleep_minutes(int sleep_time, int wake_time)
{
    int sleep_time_minutes = (sleep_time / 100) * 60 + (sleep_time % 100);
    int wake_time_minutes = (wake_time / 100) * 60 + (wake_time % 100);

    if (wake_time_minutes < sleep_time_minutes)
    {
        wake_time_minutes += 24 * 60;
    }

    int total_sleep = wake_time_minutes - sleep_time_minutes;

    return total_sleep;
}
int is_irregular(int sleep_time, int wake_time)
{
    int Irregular_Nights = 0;
    if ((sleep_time > 0000 && sleep_time < 0500) || wake_time > 1000)
    {
        Irregular_Nights++;
    }
    return Irregular_Nights;
}

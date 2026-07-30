#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    if (n <= 0 || n > 365)
    {
        printf("\ninvalid n");
        return 1;
    }
    int difficulty[365];
    int success[365];
    int time[365];
    double avgDifficulty = 0;
    int improving = 1;
    int declining = 1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &difficulty[i], &success[i], &time[i]);
        if (difficulty[i] < 1 || difficulty[i] > 10)
        {
            printf("\ninvalid difficulty");
            return 1;
        }
        avgDifficulty = avgDifficulty + difficulty[i];
    }
    avgDifficulty = avgDifficulty / n;
    for (int i = 1; i < n; i++)
    {
        if (success[i] < success[i - 1] || time[i] < time[i - 1])
        {
            improving = 0;
        }
        if (success[i] > success[i - 1] || time[i] > time[i - 1])
        {
            declining = 0;
        }
    }
    if (avgDifficulty >= 5 && improving)
    {
        printf("\nAthlete Status:Improving");
    }
    else if (avgDifficulty < 5 && declining)
    {
        printf("\nAthlete Status:Declining");
    }
    else
    {
        printf("\nAthlete Status:Stable");
    }
    return 0;
}
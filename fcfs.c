#include <stdio.h>
#include <string.h>

int main()
{
    char pn[10][10];
    char name[10][10];
    int arr[10], star[10], wt[10], tat[10], bur[10], finish[10];
    int i, n;
    int totwt = 0, tottat = 0;
    printf("Enter the no of processes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter process name, arrival time burst time\n");
        scanf("%s %d %d", &pn[i], &arr[i], &bur[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int a = arr[i];
                int b = bur[i];
                strcpy(name, pn[i]);
                arr[i] = arr[j];
                bur[i] = bur[j];
                strcpy(pn[i], pn[j]);
                arr[j] = a;
                bur[j] = b;
                strcpy(pn[j], name);
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            star[i] = arr[i];
            wt[i] = star[i] - arr[i];
            finish[i] = star[i] + bur[i];
            tat[i] = finish[i] - arr[i];
        }
        else
        {
            star[i] = finish[i - 1];
            wt[i] = star[i] - arr[i];
            finish[i] = star[i] + bur[i];
            tat[i] = finish[i] - arr[i];
        }
    }
    printf("PName\t arrival time\t start time\t burst time\t TAT\t\t finish time");
    for (i = 0; i < n; i++)
    {
        printf("\n%s\t   %d\t\t %d\t\t %d\t\t   %d\t\t   %d\n", pn[i], arr[i], star[i], bur[i], tat[i], finish[i]);
        totwt += wt[i];
        tottat += tat[i];
    }
    printf("Avg waiting time: %f\n", (float)totwt / n);
    printf("Avg ta time: %f\n", (float)tottat / n);
}
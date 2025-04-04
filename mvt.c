#include <stdio.h>

int main()
{
    int ms, mp[10], temp, i, np = 0;
    char ch = 'y';
    printf("Enter the total memory available (in bytes): ");
    scanf("%d", &ms);
    temp = ms;
    for (i = 0; ch == 'y'; i++, np++)
    {

        printf("Enter the size of process %d in bytes: ", i + 1);
        scanf("%d", &mp[i]);
        if (mp[i] <= temp)
        {
            printf("memory is allocated to process %d\n", i + 1);
            temp = temp - mp[i];
        }
        else
        {
            printf("Memory is full\n");
            break;
        }
        printf("Do you want to continue(y/n)-- ");
        scanf(" %c", &ch);
    }

    printf("Total memory available: %d\n", ms);
    printf("PROCESS\t\t MEMORY ALLOCATED\n");
    for (i = 0; i < np; i++)
    {
        printf("%d\t\t\t %d\n", i + 1, mp[i]);
    }
    printf("\nTotal memory allocated: %d", ms - temp);
    printf("\nExternal fragmentation is: %d", temp);
}
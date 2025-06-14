#include <stdio.h>
void main()
{
    int ms, bs, nob, ef, n, mp[10], tif = 0;
    int i, p = 0;
    printf("Enter the total memory available (in Bytes) -- ");
    scanf("%d", &ms);
    printf("Enter the block size (in Bytes) -- ");
    scanf("%d", &bs);
    nob = ms / bs;
    ef = ms - nob * bs;
    printf("\nEnter the number of processes -- ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter memory required for process %d (in Bytes)-- ", i + 1);
        scanf("%d", &mp[i]);
    }
    printf("\nNo. of Blocks available in memory -- %d", nob);
printf("\n\nPROCESS       \tMEMORY REQUIRED               \t ALLOCATED              \tINTERNAL FRAGMENTATION");
printf("\n----------------------------------------------------------------------------------------------");
for(i=0;i<n && p<nob;i++)
{
        printf("\n %d\t\t\t%d", i + 1, mp[i]);
        if (mp[i] > bs)
            printf("\t\t\t\tNO\t\t\t\t---");
        else
        {
            printf("\t\t\t\tYES\t\t\t\t%d", bs - mp[i]);
            tif = tif + bs - mp[i];
            p++;
        }
}
if(i<n)
printf("\nMemory is Full, Remaining Processes cannot be accomodated");
printf("\n\nTotal Internal Fragmentation is %d",tif);
printf("\nTotal External Fragmentation is %d",ef);
}
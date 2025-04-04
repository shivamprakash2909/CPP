// pgm 1 writer code
#include <stdio.h>
#include <stdlib.h>
#include <sys/shm.h>
#include <string.h>
#include <unistd.h>

int main()
{

    void *shared_memory;
    char buff[100];
    int shmid;
    shmid = shmget((key_t)2345, 1024, 0666 | IPC_CREAT);
    printf("key of shared mem is %d\n", shmid);
    shared_memory = shmat(shmid, NULL, 0);
    printf("Process is attached at %p\n", shared_memory);
    printf("Enter data to write:\n ");
    read(0, buff, 100);
    strcpy(shared_memory, buff);
    printf("\nmessage written is: %s\n", (char *)shared_memory);
}

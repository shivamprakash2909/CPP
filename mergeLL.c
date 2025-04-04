#include <stdio.h>
#include <stdlib.h>

struct Node

{
    int data;
    struct Node *next;
};

void mergell(struct Node *head)
{
    struct Node *ptr = head;
    struct Node *ptr2;
    ptr2 = (struct Node *)malloc(sizeof(struct Node));

    while (ptr != NULL)
    {
        if (ptr->data)
            ptr = ptr->next;
    }
    return head;
}

void printptr(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    // create node
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;
    struct Node *sixth;
    // mem alloc
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));
    sixth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 4;
    third->next = fourth;

    fourth->data = 1;
    fourth->next = fifth;

    fifth->data = 3;
    fifth->next = sixth;

    sixth->data = 4;
    sixth->next = NULL;

    mergell(head);
    printptr(head);
    printf("\n");

    return 0;
}
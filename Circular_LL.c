#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void printptr(struct Node *head)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr = head;
    // while (ptr->next != head)
    // {
    //     printf("%d ", ptr->data);
    //     ptr = ptr->next;
    // }
    //  printf("%d ", ptr->data);
    do
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;
    struct Node *sixth;
    struct Node *seventh;

    // allocate memory dynamically
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));
    sixth = (struct Node *)malloc(sizeof(struct Node));
    seventh = (struct Node *)malloc(sizeof(struct Node));

    head->data = 2;
    head->next = second;

    second->data = 5;
    second->next = third;

    third->data = 8;
    third->next = fourth;

    fourth->data = 90;
    fourth->next = fifth;

    fifth->data = 99;
    fifth->next = sixth;

    sixth->data = 10;
    sixth->next = seventh;

    seventh->data = 22;
    seventh->next = head;

    printptr(head);
    printf("\n");
}
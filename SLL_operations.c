#include <stdio.h>
#include <stdlib.h>

struct Node

{
    int data;
    struct Node *next;
};

struct Node *insertatfirst(struct Node *h, int n)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = h;
    ptr->data = n;
    return ptr;
}

struct Node *insertatindex(struct Node *h, int n, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp = h;
    int i = 1;
    while (i != index - 1)
    {
        temp = temp->next;
        i++;
    }
    ptr->next = temp->next;
    ptr->data = n;
    temp->next = ptr;
    return h;
}

struct Node *insertatend(struct Node *h, int n)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp = h;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = ptr;
    ptr->data = n;
    ptr->next = NULL;
    return h;
}

struct Node deleteatend(struct Node *head)
{
    struct Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}

struct Node *deleteatstart(struct Node *head)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
struct Node *deleteatindex(struct Node *head)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr = head;
    struct Node *q = ptr->next;
    int i, j = 1;
    printf("Enter index\n");
    scanf("%d", &i);

    while (j < i - 1)
    {
        ptr = ptr->next;
        j++;
    }
    ptr->next = q->next;
    free(q);
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
    seventh->next = NULL;
    printptr(head);
    printf("\n");

        printptr(head);

    return 0;
}

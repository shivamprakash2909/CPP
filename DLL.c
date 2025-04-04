#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

void display(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void create(struct Node *head)
{
    struct Node *temp = head, *new;
    int n, data;
    printf("Enter range of linked list\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        new = (struct Node *)malloc(sizeof(struct Node));
        scanf("%d", &new->data);
        new->prev = temp;
        new->next = NULL;
        if (head == NULL)
        {
            head = new;
            temp = new;
        }
        else
        {
            new->prev = head;
            temp->next = new;
            temp = new;
        }
    }
}

int main()
{

    return 0;
}
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    // consructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    head = temp;
}

void insertAtEnd(Node *&tail, int x)
{
    Node *temp = new Node(x);
    tail->next = temp;
    tail = tail->next;
}

void printnode(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(4);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    Node *head = node1;

    insertAtHead(head, 12);
    insertAtEnd(head, 14);
    printnode(head);

    return 0;
}
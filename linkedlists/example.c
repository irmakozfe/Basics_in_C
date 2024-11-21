#include <stdio.h>

typedef struct
{
    int value;
    struct node* next;
}Node;

void printList(Node* head)
{
    Node* current = head;
    while (current != NULL)
    {
        printf("%d, ", current->value);
        current = current->next;
    }
}
int main()
{
    Node n1,n2,n3;
    Node *head;
    n1.value=1;
    n2.value=2;
    n3.value=3;

    head= &n3;
    n3.next=&n1;
    n2.next=NULL;
    n1.next=&n2;

    Node n4;
    n4.value=4;
    n4.next=&n1;
    n3.next=&n4;


    printList(head);
    return 0;
}
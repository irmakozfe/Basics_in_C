
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int value;
    struct Person *next;

}Person;

void printList(Person *head)
{
    while(head != NULL)
    {
        printf("%d ", head->value);
        head=head->next;
    }

    printf("\n");
}

void addAtHead(Person **head, int value)
{

        Person *new=(Person *)malloc(sizeof(Person));
        new->value = value;
        new->next = *head;
        *head= new;
        return;


}

void insertAtTail(Person **head, int value)
{
    Person *new=(Person *)malloc(sizeof(Person));
    new->value= value;

    Person *temp= *head;
    while(temp->next !=NULL )
    {
             temp=temp->next;
    }
    temp->next=new;

}



int main()
{
   Person *head;
    Person *head2;
    head2=(Person *)malloc(sizeof(Person));
   Person *second, *third;
    head= (Person *)malloc(sizeof(Person));
    second= (Person *)malloc(sizeof(Person));
    third= (Person *)malloc(sizeof(Person));

    head->value=2;
    second->value=1;
    third->value=2;
    head2=NULL;

    head->next=second;
    second->next=third;
    third->next=NULL;
    printList(head);

    addAtHead(&head, 13);
    printList(head);
    addAtHead(&head2, 12);
    addAtHead(&head2, 22);
    printList(head2);
    //insertAtTail(&head, 101);
    printList(head);
    printList(head);






}
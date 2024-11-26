

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int value;
    struct Element *next;
}Element;

void printList(Element *head)
{
    while(head != NULL)
    {
        printf("%d ", head->value);
        head=head->next;
    }

}

void insertAtPosition(Element **head, int position, int value)
{

}

void main()
{
 Element *head= (Element*)malloc(sizeof(Element));
    head->value=1;
    Element *second=(Element*)malloc(sizeof(Element));
    second->value=3;
    Element *third=(Element*)malloc(sizeof(Element));
    third->value=5;

    head->next=second;
    second->next=third;
    third->next=NULL;

   printList(head);


}
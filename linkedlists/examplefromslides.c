#include <stdio.h>
#include <stdlib.h>


typedef struct element
{
    int value;
    struct element *next;
}Element;

//print all Elements of a List

void printList(Element *head)
{
    while(head!=NULL)
    {
        printf("%d ", head->value);
        head= head->next;
    }
}

//Functions to Work with Linear Lists

//1.
void insertAtHead(Element **head, int value) // ** : to reach the address of head
{
    Element *newnode=(Element *)malloc(sizeof(Element));
    newnode->value=value;
    newnode->next= *head; // yeni düğümün nexti, eski head'i gösterir
    *head=newnode;
}

//2.
void insertAtTail(Element **head, int value)
{
    Element *newnode=(Element *)malloc(sizeof(Element));
    newnode->value= value;
    newnode->next= NULL;

    if(*head == NULL)
    {
        *head=newnode;
        return;
    }

    Element *temp=*head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}

//3. !!!

void insertAtPosition(Element **head, int value, int position)
{
    Element *newnode=(Element *)malloc(sizeof(Element));
    newnode->value=value;

    if(position==0)
    {
        newnode->next=*head;
        *head=newnode;
        return;
    }

    Element *temp=*head;
    for(int i=0; i<position-1; i++)
    {
        temp=temp->next;
    }

    newnode->next=temp->next;
    temp->next=newnode;
}

//4.

void deleteHead(Element **head)
{
 if(head==NULL)
 {
     return;
 }
    Element *temp=*head;
    *head=(*head)->next; // !! headin adresini depşştiriyor
    free(temp);
}

//5.

void deleteTail(Element **head)
{
    if(*head==NULL) return;
    if((*head)->next == NULL)
    {
        free(*head);
        *head=NULL;
        return;
    }

    Element *temp=*head;
    while(temp->next!=NULL)
    {
        temp= temp->next;
    }

    free(temp->next);
    temp->next=NULL;
}

//6.

void deleteValue(Element **head, int value)
{
    if(*head==NULL) return;

    if((*head)->value==value)
    {
        Element *temp=*head;
        *head=(*head)->next;
        free(temp);
        return;
    }

    Element *temp=*head;
    while(temp->next!=NULL && temp->next->value!=value)
    {
        temp=temp->next;
    }
    if(temp->next==NULL)
    {
        printf("Element not found\n");
        return;
    }

    Element *todelete=temp->next;
    temp->next=temp->next->next;
    free(todelete);

}

//7.

Element *search(Element *head, int value)
{
   while(head!=NULL)
   {
       if(head->value==value) return head;
       head=head->next;
   }
    return NULL;
}

//8.

void freeList(Element **head)
{
    while(*head!=NULL)
    {
        Element *temp =*head;
        *head=(*head)->next;
        free(temp);

    }
}

int main()
{
    Element *head;
    head= (Element *)malloc(sizeof(Element));
    head->value=1;

    Element *second = (Element *)malloc(sizeof(Element));
    second->value=2;
    head->next=second;
    second->next=NULL;

    free(head);
    free(second);
    return 0;
}
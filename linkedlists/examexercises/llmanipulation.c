#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Element
{
   char name[30];
    int prio;
    struct Element *next;
}Element;

void printList(Element *head)
{
    while(head !=NULL)
    {
        printf("Priority : %d, Name; %s ", head->prio, head->name);
        printf("\n");
        head=head->next;
    }
    printf("\n");
}

void addTasks(Element **head, int prio, char name[]) {

    Element *newnode = (Element *)malloc(sizeof(Element));
    newnode->prio = prio;
    strcpy(newnode->name, name);
    newnode->next = NULL;


    if (*head == NULL || (*head)->prio < prio) {
        newnode->next = *head;
        *head = newnode;
        return;
    }


    Element *temp = *head;
    while (temp->next != NULL && temp->next->prio >= prio) {
        temp = temp->next;
    }


    newnode->next = temp->next;
    temp->next = newnode;
}
int countElements(Element *head) {
    int count = 0;
    Element *current = head;

    while (current != NULL) {
        count++;
        current = current->next;
    }

    return count;
}

void deleteTask(Element **head, int n)
{
    int counter= countElements(*head);
      Element *temp= *head;


    if(counter < n ){
        printf("Out of bound\n");
    }



    for(int i =1; i < n-1; i++)
    {
        temp=temp->next;
    }

    temp->next=temp->next->next;




}

void reverseList(Element **head){
  Element *prev= NULL;
  Element *current= *head;
  Element *next= NULL;
  while(current != NULL){
      next= current->next;
      current->next= prev;

      prev=current;
      current=next;
  }

  *head=prev;


}

int main()
{
    printf("Hello World!\n");
    Element *head=(Element*)malloc(sizeof(Element));
    Element *second=(Element*)malloc(sizeof(Element));
    Element *third=(Element*)malloc(sizeof(Element));

    strcpy(head->name, "Grocery Shopping");
    head->prio=1;

    addTasks(&head, 3, "Book Appointment" );
    addTasks(&head, 1, "Do the Dishes" );
    addTasks(&head, 2, "Finish Report" );




    printList(head);
    deleteTask(&head, 3);
    printList(head);
    printf("%d\n", countElements(head) );
    reverseList(&head);
    printList(head);

}

#include <stdlib.h>
#include <stdio.h>
typedef struct element {
    int value;
    struct element *next;
} Element;


void printList(Element *head){
    while(head != NULL){
        printf("%d - ", head->value);
        head= head->next;
    }
    printf("\n");
}

void insertAtHead(Element **head, int value){
    Element *newnode=(Element *)malloc(sizeof(Element));
    newnode->value= value;
    newnode->next= *head;
        *head= newnode;

}

insertAtTail(Element **head, int value){
    Element *newnode=(Element *)malloc(sizeof(Element));
    newnode->value=value;

    if(*head == NULL){
        *head=newnode;
        return;
    }

    Element *current= *head;
    while (current->next != NULL){
        current= current->next;
    }
    current->next=newnode;

}

void insertAtPosition(Element **head, int position, int value){
    Element *newnode=(Element *)malloc(sizeof(Element));

    newnode->value=value;
    Element *temp= * head;
    if(position==0){
      temp->next= *head;
      *head= temp;
        return ;
    }
    int i;
    for( i=0; i < (position-2); i++){
     temp= temp->next;
    }

    if(i < (position-2)){
        printf("out of bound");
    }else{
        newnode->next= temp->next;
        temp->next=newnode;
    }

}

void deleteHead(Element **head){
    if(*head == NULL ){
        printf("no object to delete");
    }
    Element *temp= *head;
    *head=temp->next;
    free(temp);
}

void deleteTail(Element **head){
    Element *temp= *head;

    while(temp->next->next != NULL){
        temp=temp->next;
    }
    temp->next=NULL;
    free(temp->next);
}

void deleteValue(Element **head,
int value){

   Element *temp= *head;
   if(temp->value == value){
       *head= temp->next;
       free(temp);
       return;

   }

   Element *prev=NULL;
   while(temp != NULL && temp->value != value){
       prev= temp;
       temp= temp->next;
   }
   prev->next= temp->next;
   free(temp);

   }

   Element *search(Element *head,
    int value){
        while(head != NULL){
            if(head->value == value){
                return head;
            }
            head= head->next;
        }
    }

    void freeList(Element** head) {
    while (*head != NULL) {        // Listenin başı NULL olana kadar
        Element* temp = *head;    // Geçici pointer ile mevcut düğümü tut
        *head = (*head)->next;    // Head'i bir sonraki düğüme kaydır
        free(temp);               // Geçici pointer ile tuttuğun düğümü serbest bırak
    }
}



int main(){
    Element *head= (Element *)malloc(sizeof(Element));
    Element *second=(Element *)malloc(sizeof(Element));
    Element *third=(Element *)malloc(sizeof(Element));

    head->value=1;
    second->value=2;
    third->value=3;
    head->next=second;
    second->next=third;
    printList(head);
    insertAtHead(&head,23);
    printList(head);
    insertAtTail(&head, 23);
    printList(head);
    insertAtPosition(&head,3 ,23);
    printList(head);
    deleteHead(&head);
    printList(head);
    deleteTail(&head);
    printList(head);
    deleteValue(&head,2);
    printList(head);
    Element *searchh= search(head, 23);
    printf("%d", searchh->value);
    freeList(&head);
    printList(head);
}


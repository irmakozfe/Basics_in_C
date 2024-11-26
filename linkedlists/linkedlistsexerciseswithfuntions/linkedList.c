#include <stdlib.h>
#include <stdio.h>
typedef struct element {
    int value;
    struct element *next;
} Element;

void printList(Element *head) {
    while(head != NULL) {
        printf("%d - ", head->value);
        head = head->next;
    }
    printf("\n");
}

void insertAtHead(Element **head, int value) {
    Element *newElement = (Element*)malloc(sizeof(Element));
    newElement->value = value;
    newElement->next = *head;
    *head = newElement;
}

void insertAtPosition(Element **head, int position, int value) {
    int i;
    Element *newElement = (Element*)malloc(sizeof(Element));
    newElement->value = value;
    Element *temp = *head;
    if(position == 0) {
        newElement->next = *head;
        *head = newElement;
        return;
    }
    for(i = 0; i < (position-1); i++) {
        temp = temp->next;
    }
    if(i < (position-1)) {
        printf("Out of bound");
    }else {
        newElement->next = temp->next;
        temp->next = newElement;
    }
}

void insertAtTail(Element **head, int value) {
    Element *newElement = (Element*)malloc(sizeof(Element));
    newElement->value = value;
    Element *temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newElement;
    newElement->next = NULL;
}

void deleteHead(Element **head) {
    Element *temp = *head;
    *head = temp->next;
    free(temp);
}

void deleteTail(Element **head) {
    Element *temp = *head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    temp->next = NULL;
    free(temp->next);
}

void deleteValue(Element **head, int value) {
    Element *temp = *head;
    if(temp->value == value) {
        *head = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL) {
        if (temp->next->value == value) {
            temp->next = temp->next->next;
            free(temp->next);
            return;
        }
        temp = temp->next;
    }
}

Element *search(Element *head, int value) {
    while (head != NULL) {
        if(head->value == value) {
            return head;
        }
        head = head->next;
    }
}

void freeList(Element** head) {
    Element *temp = *head;
    Element *next = NULL;
    while (temp != NULL) {
        next = temp->next;
        free(temp);
        temp = next;
    }
    *head = NULL;
}

int main() {
    Element *head = (Element*)malloc(sizeof(Element));
    head->value = 10;
    head->next = NULL;

   // insertAtHead(&head, 80);
    insertAtTail(&head, 100);
    printList(head);
    /*
    printList(head);
    insertAtHead(&head, 70);
    insertAtTail(&head, 60);
    printList(head);
    insertAtPosition(&head, 5, 90);
    deleteHead(&head);
    printList(head);
    deleteTail(&head);
    printList(head);
    deleteTail(&head);
    printList(head);
    deleteValue(&head, 80);
    printList(head);
    Element *ara = search(head, 10);
    printf("%d", ara->value);
    */
   // insertAtPosition(&head, 5, 20);
   // printList(head);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student
{
    char name[50];
    double grade;
    struct Student *next;
}Student;

void printList(Student *head)
{
    while(head != NULL)
    {
        printf("Name: %s , Grade: %.2f\n", head->name, head->grade);
        head=head->next;
    }
}

void addStudent(Student **head, char name[], double grade)
{
    Student *new= (Student*)malloc(sizeof(Student));
    strcpy(new->name, name) ;
    new->grade=grade;
    new->next=NULL;

    if(*head == NULL)
    {
        *head= new;
        new->next=NULL;
        return;
    }

    Student *temp= *head;

    while(temp->next != NULL)
    {
        temp= temp->next;
    }

    temp->next= new;



}

void findTopScorer(Student *head)
{
    Student *temp= head;
    double top= temp->grade;

    char name[20];
    strcpy(name, temp->name);
    while( temp != NULL )
    {
        if(temp->next->grade > temp->grade)
        {
            top = temp->grade;
            temp= temp->next;
            strcpy(name, temp->name);
        }else{
            top= temp->next->grade;
            strcpy(name, temp->next->name);
            temp=temp->next;
        }

        temp=temp->next;
    }


    printf("Top Scorer: \n");
    printf("Name: %s, Grade: %.1f", name, top );
}

void deleteStudents(Student **head, char name[])
{
    if(*head == NULL)
    {
        printf("No Students there");
        return;
    }

    if(strcmp(name, (*head)->name) == 0){
        *head=(*head)->next;
    }
    Student *temp= *head;

    while(temp->next != NULL)
    {
        if(strcmp(name, temp->next->name) == 0)
        {
            temp->next= temp->next->next;
        return;
        }

        temp=temp->next;

    }
}
int main()
{
    Student *head=(Student *)malloc(sizeof(Student));
    strcpy(head->name, "Buse");
    head->grade= 2.3;

    addStudent(&head, "Irmak", 2.7);
    addStudent(&head, "Beyza", 3.3);
    addStudent(&head, "Elif", 1.3);
    printList(head);
    findTopScorer(head);
    printf("\n");
    printf("Lists after: \n");

    deleteStudents(&head, "Beyza");
        deleteStudents(&head, "Buse");

    printList(head);


}
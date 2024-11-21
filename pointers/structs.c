#include <stdio.h>
#include <string.h>

//typedef struct -> Person person1, instead of struct Person person1
typedef struct
{
    char first_name[20];
    char last_name[20];
} Person;

void readPerson(Person *p)
{
printf("Enter first name: ");
    scanf("%19s", p->first_name);
    printf("Enter last name: ");
    scanf("%19s", p->last_name);
}

int main()
{
    Person doja;
    Person *pdoja= &doja;
    readPerson(pdoja); //When u use pointer in method, remove the star. use &doja or pdoja
    printf("The first name is: %s\n The last name is: %s\n", doja.first_name, doja.last_name);
    //possible access methods

    char *n1=doja.first_name; //struct member operator .
    char *n2=pdoja->first_name; //struct pointer operator ->

    char *n3=(*pdoja).first_name;
    char *n4=(&doja)->first_name;

    return 0;
}

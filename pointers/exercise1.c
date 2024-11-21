#include <stdio.h>

//this source code finds the oldest Person in a Person array
typedef struct {
    char first_name[20];
    char last_name[20];
    int age;
} Person;


void readPerson(Person *p) {
    printf("Enter first name: ");
    scanf("%19s", p->first_name);
    printf("Enter last name: ");
    scanf("%19s", p->last_name);
    printf("Enter age: ");
    scanf("%d", &p->age);
}

int main() {
    Person persons[3]; // Array of 3 Person structs
    Person *oldest = &persons[0]; // Pointer to track the oldest person


    for (int i = 0; i < 3; i++) {
        printf("\nEnter details for person %d:\n", i + 1);
        readPerson(&persons[i]);


        if (persons[i].age > oldest->age) {
            oldest = &persons[i];
        }
    }


    printf("\nThe oldest person is: %s %s, Age: %d\n",
           oldest->first_name, oldest->last_name, oldest->age);

    return 0;
}
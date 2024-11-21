
#include <stdio.h>

typedef struct
{
   int id;
   char name[20];
   float salary;

}Employer;

void readEmployer(Employer *e)
{
  printf("Enter the id :");
    scanf("%d", &e->id);
  printf("Enter the name:");
    scanf("%s", e->name);
  printf("Enter the salary: ");
    scanf("%f", &e->salary);

}

int main()
{
  Employer emp[5];
  Employer *highest=&emp[0];

  for(int i=0; i < 5; i++)
  {
    printf("\nEnter the infos about this Employee :\n", i + 1);
    readEmployer(&emp[i]);

    if(emp[i].salary > highest->salary)
    {
      *highest = emp[i];
    }
  }

  printf("Employee with highest salary is : %d %s %f ", highest->id , highest->name, highest->salary );
  return 0;

}

#include <stdio.h>
#include <stdlib.h>
//this source code calculates the average of scores of a Student

typedef struct
{
 char name[40];
 int *score;
 int numOfScores;

}Student;

//const for static variables
float calculateAverage(const Student *students)
{
int sum= 0;
 int len= students->numOfScores;
for(int i= 0; i<len; i++)
{
 sum += students->score[i];
}
 return (float)sum/students->numOfScores;
}

void freeStudents(Student *s)
{
 free(s->score);
}

void readStudents(Student *s)
{
 printf("Enter student's name: ");
 scanf("%39s", s->name); //char[] behaves like an adress
 printf("Enter the number of scores :");
 scanf("%d", &s->numOfScores); // & shpuld be used

 //heap
 s->score = (int *)malloc(s->numOfScores * sizeof(int)); //dinamik bellek
 if(s->score == NULL)
 {
  printf("Memory allocation error");
  exit(1);
 }

 //reading notes
 int len= s->numOfScores;
 printf("Enter %d scores: ", s->numOfScores);
 for(int i = 0; i < len; i++)
 {
  printf("Score : %d", i + 1);
  scanf("%d", &s->score[i]);
 }


}

int main()
{
 Student student;
 Student *pstudent=&student;
 readStudents(pstudent);
 float average = calculateAverage(pstudent);
 printf("Student: %s\n", pstudent->name);
 printf("Average: %f\n", average);
 freeStudents(pstudent);
 return 0;
}

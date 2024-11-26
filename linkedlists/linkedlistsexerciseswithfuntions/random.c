#include <stdio.h>
#include <stdlib.h>

typedef struct{
  int number;
  struct Number *next;
}Number;

int main(){
  Number *head=(Number *)malloc(sizeof(Number));
  Number *second=(Number *)malloc(sizeof(Number));
  Number *third=(Number *)malloc(sizeof(Number));

  head->number=1;
  second->number=2;
  third->number=3;

 head->next=second;
 second->next=third;


}

#include <stdio.h>
#include <stdbool.h>
bool areArraysEqual(int array1[], int array2[], int size1, int size2)
{
 for (int i = 0; i < size1; i++)
 {
  for (int j = 0; j < size2; j++)
  {
   if (array1[i] == array2[j])
   {
    return true;
   }else
   {
    return false;
   }
  }
 }
}

int main()
{
int array1[]={1,2,3};
 int array2[]={1,2,3};
 int size1 = sizeof(array1)/sizeof(int);
 int size2 = sizeof(array2)/sizeof(int);
 if(areArraysEqual(array1, array2, size1, size2))
 {
  printf("Arrays are equal\n");
 }else
 {
  printf("Arrays are not equal\n");
 }
}

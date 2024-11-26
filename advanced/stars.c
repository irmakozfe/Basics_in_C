
#include <stdio.h>

void stari(int arr[], int size)
{
 for(int i= 0; i < size; i++)
 {
     int k = arr[i];
    while(k > 0)
    {
       printf("*");
        k--;
    }
     printf("\n");

 }
}

int main()
{
    int arr[]={2,3,5, 1};
    int size= sizeof(arr)/sizeof(int);
    stari(arr, size);

}
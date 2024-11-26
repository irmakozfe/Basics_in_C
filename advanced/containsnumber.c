
#include <stdio.h>

int contains(int arr[], int number, int size)
{
    for(int i=0; i < size; i++)
    {
        if(arr[i] == number)
        {
            return 1;

        }
    }
    return 0;
}

int main()
{
    int arr[]={1,2,3};
    int size= sizeof(arr)/sizeof(int);
    if(contains(arr, 2, size) == 1)
    {
        printf("Yes");

    }else
    {
        printf("No");
    }
}
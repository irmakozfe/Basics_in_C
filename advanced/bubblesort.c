
#include <stdio.h>

void sort(int arr[], int size)
{
    for(int i=0; i < size-1; i++)
    {
        for(int j=0; j<size-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int i=0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

}

int main()
{
    int arr[]={22, 3, 5, 6, 6, 4, 11};
    int size= sizeof(arr)/sizeof(int);
    sort(arr,size);
}
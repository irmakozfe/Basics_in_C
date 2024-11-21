
#include <stdio.h>

int findsum(int number[], int size)
{
    int sum=0;
    for (int i = 0; i < size ; i++)
    {
        sum += number[i];
    }
    return sum;
}

int findproduct(int number[], int size)
{
    int product=1;
    for(int i=0;i<size;i++)
    {
        product *= number[i];
    }
    return product;
}

int main()
{
    int number[]={3,6,10};
    int size= sizeof(number)/sizeof(number[0]);
    int summ= findsum(number,size);
    int product= findproduct(number,size);
    printf("%d\n",summ);
    printf("%d\n", product);
    return 0;
}

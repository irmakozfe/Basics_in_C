

#include <math.h>
#include <stdio.h>

int binaryconverter(int number)
{
    int binary=0;
    int i=0;
    while(number > 0)
    {
        int remainder= number%2;
        binary += remainder * pow(10,i);
        number /= 2;
        i++;


    }
    return binary;
}

int main()
{
    int number;
    printf("Enter the number :");
    scanf("%d", &number );
    int binary= binaryconverter(number);
    printf("%d\n", binary);
}

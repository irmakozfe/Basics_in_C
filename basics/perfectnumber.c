
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPerfect(int number)
{
    int sum = 0;

    for (int i = 1; i < number; i++)
    {
        if(number % i == 0)
        {
            sum += i;
        }
    }

    return (sum == number);
}

int main()
{
int number;
    printf("Enter the number:");
        scanf("%d", &number);
    if (isPerfect(number))
    {
        printf("%d is perfect number", number);
    } else
    {
        printf("It is not perfect number");
    }

}

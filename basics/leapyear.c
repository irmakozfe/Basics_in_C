#include <stdio.h>
#include <stdbool.h>

bool isLeapYear(int year)
{
    if(year % 4==0 && year %100==0 && year % 400==0)
    {
        return true;
    }else
    {
        return false;
    }
}

int main()
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    if(isLeapYear(year))
    {
        printf("%d is a Leap Year", year);
    }else
    {
        printf("%d is not a Leap Year", year);
    }
}

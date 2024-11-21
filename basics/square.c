
#include <stdio.h>

#define sqr(a) ((a)*(a))

int main()
{
    int number=3;
    printf("Square of the number : %d", sqr(number) );
    printf("Square of the number : %d", sqr(number+2) );
    return 0;
}
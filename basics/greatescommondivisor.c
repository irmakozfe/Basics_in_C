#include <stdio.h>

int findGCD(num1, num2)
{
    int gcd=1;
    int k= (num1<num2)? num1:num2;
    if(num1 < num2)
    {
        for(int i = 1; i <= k; i++)
        {
            if(num1%i == 0 && num2%i == 0)
            {
                gcd=i;
            }
        }
        return gcd;
    }
}

int main()
        {
            int num1, num2;
            printf("Enter two numbers :");
            scanf("%d%d", &num1, &num2);
            printf("Greatest common divisor is %d", findGCD(num1, num2));
        }

#include <stdio.h>
//Complex MNumber Operations

typedef struct
{
  float real;
  float imaginary;

}ComplexNumber;

ComplexNumber add(const ComplexNumber *num1,const ComplexNumber *num2)
{
ComplexNumber result;
result.real= num1->real + num2->real;
result.imaginary= num1->imaginary + num2->imaginary;
return result;
}

int main()
{
ComplexNumber num1={7.5, 2.2},
  num2={1.2, 3.0};

  ComplexNumber result= add(&num1, &num2);

  printf("The sum is %.2f + %.2fi\n", result.real, result.imaginary);

}



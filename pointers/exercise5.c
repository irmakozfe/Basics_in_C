//Rectangle Operations
#include <stdio.h>

typedef struct
{
    float width;
    float length;

}Rectangle;

void calculateAreaandPerimeter(Rectangle rectangle)
{
  float area = rectangle.width * rectangle.length;
  float perimeter = 2 * (rectangle.width + rectangle.length);
    printf("\nArea is: %f \nPerimeter is : %f", area, perimeter);
}

int isSquare(Rectangle rectangle)
{
  if(rectangle.length == rectangle.width)
  {
      return 1;
  } else
  {
      return 0;
  }
}

int main()
{
Rectangle rectangle1;
    rectangle1.width = 5;
    rectangle1.length = 10;
Rectangle rectangle2;
    rectangle2.width = 5;
    rectangle2.length=5;

   calculateAreaandPerimeter(rectangle1);
    if(isSquare(rectangle1))
    {
        printf("the given rectangle is square");
    }else
    {
        printf("\nthe given rectangle isn't square");
    }
    calculateAreaandPerimeter(rectangle2);


    if(isSquare(rectangle2))
    {
        printf("\nthe given rectangle is square");
    }else
    {
        printf("the given rectangle isn't square");
    }
}
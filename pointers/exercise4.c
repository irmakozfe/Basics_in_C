#include <stdio.h>
//Product Inventory

typedef struct
{
    int id;
    char name[20];
    float price;
    int quantity;
}Product;

float getTotal(Product *p)
{
    float highest=0;

    for (int i = 0; i < 3; i++)
    {
        float result=p[i].price * p[i].quantity;;
        if (result > highest)
        {
            highest=result;
        }
    }
    return highest;
}

int main()
{

Product products[3]={{1,"alexa", 24.95, 3},
    {2, "kindle", 161.65, 5},
    {3,"adidas gazelle", 85.99} };

    float total=getTotal(products);
    printf("The highest : %f\n", total);

}
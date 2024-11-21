#include <stdio.h>

typedef struct
{
    char brand[30];
    char model[30];
    float price;
    int year;
}Car;

void mostExpensiveCar(Car *cars, int size)
{
    Car *mostExpensiveCar=&cars[0];
    for(int i=0;i<size;i++)
    {
        if(cars[i].price> mostExpensiveCar->price)
        {
            mostExpensiveCar=&cars[i];
        }
    }

    printf("Most Expensive Car:\n");
    printf("Brand: %s\nModel: %s\nPrice: %.2f\nYear: %d\n",
        mostExpensiveCar->brand, mostExpensiveCar->model,
        mostExpensiveCar->price, mostExpensiveCar->year);


}

int main()
{
    Car cars[3]={{"Toyota", "Corolla", 20000, 2020 },
        {"BMW", "X5", 55000, 2022},
        {"Ford", "Focus", 18000, 2019}
    };
    int size= sizeof(cars)/sizeof(Car);
    mostExpensiveCar(cars, size);

}


#include <stdio.h>

int main()
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers) / sizeof(int);

    int max = numbers[0];
    int min = numbers[0];

    for(int i = 0; i < size; i++)
    {
        if(numbers[i] > max)
        {
            max = numbers[i];
        }
        if(numbers[i] < min)
        {
            min = numbers[i];
        }
    }

    printf("Max: %d\n", max );
    printf("Min: %d\n", min );

    return 0;
}

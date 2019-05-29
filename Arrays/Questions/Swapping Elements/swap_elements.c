#include <stdlib.h>
#include <stdio.h>

void display(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int *swap(int array[], int size)
{
    int *result = malloc(sizeof(int) * size);
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        temp = array[i];
        result[temp] = i;
    }
    return result;
}

int main()
{
    int size;
    printf("Enter the size of the array\n");
    scanf("%d", &size);

    printf("Enter %d elements\n", size);
    int *array = malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    int *result = swap(array, size);
    display(array, size);
    display(result, size);
}
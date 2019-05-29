#include <stdlib.h>
#include <stdio.h>

int *search_elements(int *array, int element, int start_index)
{
    int *result = malloc(sizeof(int) * 2);
    result[0] = -1;
    result[1] = -1;

    for (int i = start_index; i < sizeof(array); i++)
    {
        if (array[i] == element)
        {
            result[0] = i;
            result[1] = start_index;
        }
    }
    printf("%d %d\n", result[0], result[1]);
    return result;
}

int main()
{
    int size, element_one, element_two;
    printf("Enter the size of the array\n");
    scanf("%d", &size);
    int *array = malloc(sizeof(int) * size);
    printf("Enter %d elements\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter the elements to be searched.");
    scanf("%d %d", &element_one, &element_two);

    int *result = malloc(sizeof(int)*2);
    result[1] = 0; 
    while(result[1] )

    result = search_elements(array, element_one, element_two);
    if (result[0] != -1)
    {
        printf("Element one found at %d\n", result[0]+1);
    }
    else
    {
        printf("Element one not found\n");
    }

    if (result[1] != -1)
    {
        printf("Element two found at %d\n", result[1]+1);
    }
    else
    {
        printf("Element two not found\n");
    }

    return 0;
}
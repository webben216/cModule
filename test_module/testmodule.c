#include <stdio.h>
#include <stdlib.h>
#include "testmodule.h"

int *array;
int size;

void init(int s)
{
    size = s;
    array = malloc(size * sizeof(int));
    if (array == NULL)
    {
        printf("Error: could not allocate memory for the array\n");
        exit(1);
    }
    for (int i = 0; i < size; i++)
    {
        array[i] = 0;
    }
}

void process(int input)
{
    for (int i = 0; i < size; i++)
    {
        array[i] += input;
    }
}

void print_array(void)
{
    printf("Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}



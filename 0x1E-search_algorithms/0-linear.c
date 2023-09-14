#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * linear_searh - a function that searches for a value using linear
 * search algorithm
 * @array: pointer to the first element
 * @size: number of elements in the array
 * @value: value to be searched
 * Return: Position where value is located, otherwise -1
 */

int linear_search(int *array, size_t size, int value)
{
        size_t i;

        if (array == NULL)
        {
                return (-1);
        }

        for (i = 0; i < size; i++)
        {
                printf("Value checked array[%li] = [%i]\n", i, array[i]);

                if (array[i] == value)
                {
                        return (i);
                }
        }

        return (-1);
}


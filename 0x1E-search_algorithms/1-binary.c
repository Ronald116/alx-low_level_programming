#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element
 * @size: number of elements in the array
 * @value: the value to be searched
 * Return: Always EXIT_SUCCESS, otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	int low, mid, end;
	int i;

	low = 0;
	end = size - 1;

	if (array == NULL)
	{
		return (-1);
	}

	while (low <= end)
	{
		mid = (low + end) / 2;

		printf("Searching in array: ");
		for (i = low; i <= end; i++)
		{
			printf("%i%s", array[i], i == end ? "\n" : ", ");
		}

		if (value < array[mid])
		{
			end = mid - 1;
		}
		else if (value > array[mid])
		{
			low = mid + 1;
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}


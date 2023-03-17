#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *array_range - a ftn that creates an array of integers
 * @min: input
 * @max: input
 * Return: Always 0
 */

int *array_range(int min, int max)
{
	int *a, i = 0;

	if (min > max)
		return (NULL);

	a = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
		return (NULL);

	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}

	return (a);
}

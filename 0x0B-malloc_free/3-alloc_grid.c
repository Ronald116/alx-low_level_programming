#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - a ftn that returns a pointer to
 * a 2 dimensional array of integers
 * @width: input
 * @height: input
 * Return: Always 0
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int i, k;


	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(sizeof(*a) * height);
	if (a == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == 0)
		{
			for (k = 0; k < i; k++)
			{
				free(a[k]);
			}
			free(a);
			return (NULL);
		}
		for (k = 0; k < width; k++)
		{
			a[i][k] = 0;
		}
	}
	return (a);
}

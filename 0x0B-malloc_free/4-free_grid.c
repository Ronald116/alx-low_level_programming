#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - a ftn that frees a 2 dimensional grid
 * previously created by your alloc_grid
 * @grid: input
 * @height: input
 * Return: Always 0
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL && height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}

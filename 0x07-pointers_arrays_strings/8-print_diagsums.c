#include "main.h"
#include <stdio.h>

/*
 * print_diagsums - entry point
 * @: input
 * @size: input
 * Return: Always 0
 */

void print_diagsums(int *a, int size)
{
	int i, n, total = 0, total1 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		total = total + a[i];

	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
		total1 = total1 + a[n];
	printf("%d, %d\n", total, total1);
}

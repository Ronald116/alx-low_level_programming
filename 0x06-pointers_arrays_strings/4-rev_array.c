#include "main.h"
/**
 * reverse_array - a function that reverses
 * the content of an array of integers.
 * @a: first input
 * @n: second input
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}

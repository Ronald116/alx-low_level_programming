#include "main.h"
/**
 * print_number - a function that prints an integer
 * @n: variable
 * Return: Always 0
 */

void print_number(int n)
{
	int j;

	j = n;

	if (n < 0)
	{
		_putchar('-');
		j = -n;
	}

	if (j / 10 != 0)
	{
		print_number(j / 10);
	}
	_putchar((j % 10) + '0');
}


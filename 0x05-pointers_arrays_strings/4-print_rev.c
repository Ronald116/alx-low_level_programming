#include "main.h"
/**
 * print_rev - a function that prints a string,
 *  in reverse, followed by a new line.
 *  @s: char input
 *  Return: Always 0
 */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	i -= 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	};
	_putchar('\n');
}

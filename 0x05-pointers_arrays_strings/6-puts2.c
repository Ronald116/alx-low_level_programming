#include "main.h"
/**
 * puts2 - a function that prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: input
 * Return: Always 0
 */

void puts2(char *str)
{
	int a = 0;

	while (*(str + a) != '\0')
	{
		if (a % 2 == 0)
		{
			_putchar(*(str + a));
		}
		a++;
	}
	_putchar('\n');
}

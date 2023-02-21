#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day
 * Return: ...
 */

void jack_bauer(void)
{
	int x, y;

	for (y = 0; y < 24; y++)
	{
		for (x = 0; x < 60; x++)
		{
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
			_putchar(':');
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar('\n');
		}
	}
}


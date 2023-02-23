#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers
 * Return: Always 0
 */

void more_numbers(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n >= 10)
			{
				_putchar((n / 10) + 0);
			}
			_putchar((n % 10) + 0);
		}

		_putchar('\n');

	}

}


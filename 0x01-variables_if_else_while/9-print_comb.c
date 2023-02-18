#include <stdio.h>
/**
 * main -  combination of single digits numbers
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int a;

	a = '0';

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}



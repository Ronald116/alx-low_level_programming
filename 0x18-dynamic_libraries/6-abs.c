#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 * @n - input to be used
 * Return: absolute number of n
 */

int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val = n * -1;
		return (abs_val);
	}
	return (n);
}

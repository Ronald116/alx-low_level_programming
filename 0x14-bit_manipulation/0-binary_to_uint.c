#include "main.h"

/**
 * binary_to_uint - Converts a binary number 2 unsigned int.
 * @b: String containing the binary number.
 * Return: Converted number.
 */
unsigned int binary_to_uint(const char *b)
{

	unsigned int deci_num = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		if (b[i]  != '0' && b[i] != '1')
			return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		deci_num *= 2;
		if (b[i] == '1')
			deci_num += 1;
	}
	return (deci_num);
}


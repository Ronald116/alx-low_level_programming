#include "main.h"
/**
 * *string_toupper - a function that changes all
 * lowercase letters of a string to uppercase.
 * @n: input value
 * Return: Always 0
 */

char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
	}
	return (n);
}

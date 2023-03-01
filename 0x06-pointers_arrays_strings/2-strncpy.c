#include "main.h"
/**
 * *_strncpy - a function that copies a string.
 * @dest: first variable
 * @src: second variable
 * @n: third variable
 * Return: Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		if (i < n)
			dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';

	return (dest);
}

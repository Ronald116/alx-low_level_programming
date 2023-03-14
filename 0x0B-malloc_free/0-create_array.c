#include "main.h"
#include <stdlib.h>
/**
 * *create_array - a function that creates
 * an array of chars and initializes
 * it witha a specific char
 * @size: input
 * @c: input
 * Return: Always 0
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	if (s == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}

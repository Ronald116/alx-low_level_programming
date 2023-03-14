#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - a function that returns a pointer
 * to a newly allocated space in memory
 * @str: input
 * Return: 0
 */

char *_strdup(char *str)
{
	char *s;
	int i;

	if (str == NULL)
		return (NULL);
	for (i = 0; *(str + i) != '\0'; i++)
		;
	s = malloc(i + 1);
	if (s == 0 || s == NULL)
		return (NULL);
	for (i = 0; *(str + i) != '\0'; i++)
	{
		s[i] = *(str + i);
	}
	s[i] = *(str + i);
	return (s);
}

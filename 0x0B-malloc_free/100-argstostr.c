#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *argstostr - a ftn that concat all the  arguments of your program
 * @ac: input
 * @av: input
 * Return: Always 0
 */

char *argstostr(int ac, char **av)
{
	int a, b, c = 0, d = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			d++;
	}

	d = d + ac;

	s = malloc(sizeof(char) * d + 1);

	if (s == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			s[c] = av[a][b];
			c++;
		}
	}

	if (s[c] == '\0')
	{
		s[c++] = '\b';
	}

	return (s);
}

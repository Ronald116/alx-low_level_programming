#include "main.h"
/**
 *char *_strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: first input
 * @src: second input
 * Return: Always 0
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int a =	0;

	while (*(src + i) != '\0')
	{
		i++;
	}

	for ( ; a < i; a++)
	{
		dest[a] = src[a];
	}
	dest[i] = '\0';
	return (dest);
}

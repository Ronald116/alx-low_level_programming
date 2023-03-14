#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **strtow - function that splits a string into words
 * @str: input
 * Return: Always 0
 */

char **strtow(char *str)
{
	char **a;
	int i, k, n, word_count = 0, word_len = 0, current_word = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) != ' ')
			word_count++;
		while (*(str + i) != ' ' && *(str + i))
			i++;
		if (!*(str + i))
			break;
	}
	if (word_count == 0)
		return (NULL);
	a = malloc(sizeof(char *) * (word_count + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0, k = i; current_word < word_count; i++, word_len = 0, k = i)
	{
		if (*(str + i) == ' ')
			continue;
		while (*(str + k) != ' ' && *(str + k++))
			word_len++;
		a[current_word] = malloc(sizeof(char) * word_len + 1);
		if (!a[current_word])
		{
			while (current_word-- >= 0)
				free(a[current_word]);
			free(a);
			return (NULL);
		}
		for (n = 0; i < k; i++, n++)
			a[current_word][n] = *(str + i);
		a[current_word++][n] = '\0';
	}
	a[word_count] = NULL;
	return (a);
}

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_dlistint - a ftn that prints all elements
 * @h: head input
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int num_nodes = 0;


	if (h == NULL)
	{
		return (num_nodes);
	}

	else
	{
		while (h != NULL)
		{
			printf("%d\n", h->n);
			h = h->next;
			num_nodes++;
		}
	}

	return (num_nodes);
}

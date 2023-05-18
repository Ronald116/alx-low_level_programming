#include "lists.h"
/**
 * dlistint_len - a ftn that returns the number of elements in the list
 * @h: head input
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int num_elem = 0;

	if (h == NULL)
	{
		return (num_elem);
	}

	while (h != NULL)
	{
		num_elem++;
		h = h->next;
	}

	return (num_elem);

}

#include "lists.h"

/**
 * get_dnodeint_at_index - a ftn that gets the
 * nth node of a list
 * head: head input
 * @index: position input
 * Return: node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
        	}
		current = current->next;
		count++;
	}

	return (current);
}

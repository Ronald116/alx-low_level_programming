#include "lists.h"
/**
 * delete_dnodeint_at_index - ftn to delete node at a given
 * position
 * @head: head input
 * @index: positon
 * Return: 1 if Success
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count;
	dlistint_t *current;
	current = *head;
	count = 0;
	 if (*head == NULL)
	return -1;  /* List is empty, deletion failed*/

	
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
		{
            		(*head)->prev = NULL;
		}
        	free(current);
        return 1;  /* Deletion succeeded*/
    	}

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	if (current == NULL)
	{
		return -1;  /* Index out of range, deletion failed*/
	}

	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}

	if (current->prev != NULL)
	{
		current->prev->next = current->next;
	}

	free(current);

	return (1);

}

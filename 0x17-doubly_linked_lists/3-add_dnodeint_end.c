#include "lists.h"
/**
 * add_dnodeint_end - a ftn that adds a new node
 * at the end of the list
 * @head: head input
 * @n: data input
 * Return: address of new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp;
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	tmp = *head;

	if (tmp != NULL)
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newnode;
	}
	else
	{
		*head = newnode;
	}

	newnode->prev = tmp;

	return (newnode);
}

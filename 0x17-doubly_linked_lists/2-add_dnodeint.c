#include "lists.h"
/**
 * add_dnodeint - a ftn to add a new node at the
 * beginning
 * head: head input
 * @n: data input
 * Return:address of the node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

        newNode = malloc(sizeof(dlistint_t));

        newNode->n = n;

        if (newNode == NULL)
        {
                return (NULL);
        }

        if (*head == NULL)
        {
                *head = newNode;
        }

        else
        {
                (*head)->prev = newNode;
                newNode->next = (*head);
                (*head) = newNode;
                newNode->prev = NULL;
	}

	return (*head);
}

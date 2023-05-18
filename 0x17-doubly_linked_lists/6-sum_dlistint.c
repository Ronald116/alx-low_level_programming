#include "lists.h"
/**
 * um_dlistint - ftn that returns the sum of all data
 * @head: head input
 * Return: Sum of all data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

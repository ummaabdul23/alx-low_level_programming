#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a doubly linked list
 * @head: pointer to the list
 * Return: sum of the list or 0
 **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}

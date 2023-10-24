#include "lists.h"

/**
 * reverse_listint - reverse a list
 * @head: first node in the list
 *
 * Return: first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *last = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = last;
		last = *head;
		*head = next;
	}

	*head = last;

	return (*head);
}

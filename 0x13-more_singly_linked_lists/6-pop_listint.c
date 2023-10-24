#include "lists.h"

/**
 * pop_listint - removes the head node of a linked list
 * @head: first element in the linked list
 *
 * Return: the data in the elements that was removed,
 * or 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head || !*head)
		return (0);

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}

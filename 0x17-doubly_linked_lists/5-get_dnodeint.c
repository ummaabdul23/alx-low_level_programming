#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 * @head: pointer to the list
 * @index: nth node
 * Return: nth node or NULL.
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int count = 0;

	while (node && count != index)
	{
		count++;
		node = node->next;
	}
	if (node && count == index)
		return (node);
	return (NULL);
}

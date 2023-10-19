#include "lists.h"
/**
 * add_node_end - adds a new node to the end of a list
 * @head: address of the first node
 * @str: string to insert into the new node
 * Return: address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *start, *last;
	unsigned int len = 0;

	while (str[len])
		len++;

	start = malloc(sizeof(list_t));
	if (!start)
		return (NULL);

	start->str = strdup(str);
	start->len = len;
	start->next = NULL;

	if (*head == NULL)
		*head = start;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = start;
	}
	return (*head);
}

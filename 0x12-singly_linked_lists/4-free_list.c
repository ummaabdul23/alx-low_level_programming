#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: list to be freed
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}

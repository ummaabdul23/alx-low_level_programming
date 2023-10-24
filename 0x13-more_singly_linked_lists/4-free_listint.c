#include "lists.h"

/**
 * free_listint - free a list
 * @head: list parameter to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

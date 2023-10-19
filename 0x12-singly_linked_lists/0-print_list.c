#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all elements of a list
 * @h: list parameter
 *
 * Return: number of nodes in h
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	for (i = 0; h != NULL; i++)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
	}
	return (i);
}

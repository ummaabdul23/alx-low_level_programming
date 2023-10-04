#include "main.h"
#include <stdlib.h>

/**
  * _strdup - Duplicates a string.
  * @str: string to be duplicated.
  *
  * Return: String
  */
char *_strdup(char *str)
{
	char *a = NULL;
	unsigned int x, count = 0;

	if (str == NULL)
		return (NULL);
	while (str[count] != '\0')
		count++;
	a = malloc((count + 1) * sizeof(char));

	if (a == NULL)
		return (NULL);
	for (x = 0; x <= count; x++)
		a[x] = str[x];
	return (a);
}

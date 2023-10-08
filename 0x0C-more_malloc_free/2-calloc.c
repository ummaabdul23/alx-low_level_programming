#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocate memory to an array, using malloc
  * @nmemb: element count
  * @size: parameter size
  *
  * Return: void
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	for (x = 0; x < (nmemb * size); x++)
	{
		array[x] = 0;
	}
	return (array);
}

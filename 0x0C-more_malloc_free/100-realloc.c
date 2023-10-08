#include "main.h"
#include <stdlib.h>

/**
  * _realloc - allocates memory to an array: using malloc
  * @ptr: pointer
  * @old_size: size1
  * @new_size: size2
  *
  * Return: returns a pointer to an array of elements.
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int x;
	char *array;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	array = malloc(new_size);
	if (array == NULL)
		return (NULL);
	for (x = 0; x < new_size; x++)
		*(array + (x * new_size)) = 0;
	return (array);
}

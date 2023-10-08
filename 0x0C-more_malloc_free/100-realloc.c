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
	void *array;

	if (ptr == NULL)
	{
		array = malloc(new_size);
		return (array);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
	array = malloc(new_size);
	if (array == NULL)
		return (NULL);
	for (x = 0; x < min(old_size, new_size); x++)
		*((char *) array + x) = *((char *) ptr + x);
	free(ptr);
	return (array);
	}
}

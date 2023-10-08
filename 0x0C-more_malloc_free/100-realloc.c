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
	void *array = 0;
	char *write, *read;

	if (new_size == old_size)
		return (ptr);

	if (new_size > 0 || ptr == 0)
	{
		array = malloc(new_size);
		if (array == 0)
			return (0);
	}
	if (new_size > 0 && ptr != 0)
	{
		write = array;
		read = ptr;
		if (new_size < old_size)
			old_size = new_size;
		while (old_size)
		{
			old_size--;
			*write++ = *read++;
		}
	}

	free(ptr);
	return (array);
}

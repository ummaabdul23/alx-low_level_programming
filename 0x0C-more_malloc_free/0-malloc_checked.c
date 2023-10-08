#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - allocates memory using malloc
  * @b: parameter
  *
  * Return: void
  */
void *malloc_checked(unsigned int b)
{
	void *array = malloc(b);

	if (array == NULL)
		exit(98);
	return (array);
}

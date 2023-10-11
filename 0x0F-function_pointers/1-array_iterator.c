#include "function_pointers.h"

/**
  * array_iterator - executes a function given as a
  * parameter on each element of an array
  * @array: array arameter
  * @size: array size
  * @action: function ointer
  *
  * Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	if (action != NULL && array != NULL && size > 0)
	{
		while (size > x)
		{
			action(array[x]);
			x++;
		}
	}
}

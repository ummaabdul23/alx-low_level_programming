#include "function_pointers.h"

/**
  * int_index - searches for an integer
  * @array: array parameter
  * @size: array size
  * @cmp: used to compare values
  *
  * Return: integer
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]) != 0)
					return (i);

				i++;
			}
		}
	}

	return (-1);
}

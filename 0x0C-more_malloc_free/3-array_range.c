#include "main.h"
#include <stdlib.h>

/**
  * array_range - creates array of integers
  * @min: starting parameter
  * @max: ending parameter
  *
  * Return: integer
  */

int *array_range(int min, int max)
{
        int x, y = 0;
        int *array;

        if (min > max)
                return (NULL);
        array = malloc(sizeof(*array) * ((max - min) + 1));
        if (array == NULL)
                return (NULL);
        for (x = min; x <= max; x++)
	{
                array[y] = x;
		y++;
	}
        return (array);
}         

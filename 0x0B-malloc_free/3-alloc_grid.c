#include "main.h"
#include <stdlib.h>
/**
  * alloc_grid - creates 2 dimensional array of integers
  * @width: columns
  * @height: rows
  *
  * Return: returns a pointer to a 2 dimensional array of integers.
  */
int **alloc_grid(int width, int height)
{
	int x, y, **matrix;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		matrix[x] = malloc(width * sizeof(int));
		if (matrix[x] == NULL)
		{
			for (y = x - 1; y >= 0; y--)
				free(matrix[y]);
			free(matrix);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			matrix[x][y] = 0;
	}
	return (matrix);
}

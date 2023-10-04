#include "main.h"
#include <stdlib.h>

/**
  * free_grid - Frees 2 dimensional array of integers
  * @grid: dimensional array
  * @height: rows
  *
  * Return: void
  */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}

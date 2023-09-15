#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: the character
 *
 * Return; void
 */
void print_triangle(int size)
{
	int i, j;
	
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size - 1; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

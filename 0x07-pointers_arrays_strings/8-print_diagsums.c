#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - prints the sum of two diagonals
  * @a: parameter 1
  * @size: parameter 2
  *
  * Return: void
  */

void print_diagsums(int *a, int size)
{
	int i, j, k;
	int l = 0;
	int diag_1 = 0;
	int diag_2 = 0;

	k = size - 1;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (i == j)
				diag_1 += a[l];
			if (j == k)
				diag_2 += a[l];
			l++;
			j++;
		}
		k--;
		i++;
	}
	printf("%i, %i\n", diag_1, diag_2);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * string_nconcat - concatenate 2 strings
  * @s1: string1
  * @s2: string2
  * @n: parameter
  *
  * Return: String concatenated.
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array = NULL;
	unsigned int x = 0, y = 0, z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	if (n < y)
		y = n;
	array = malloc((x + y + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (z = 0; z < x; z++)
		array[z] = s1[z];
	x = z;
	for (z = 0; z < y; z++, x++)
		array[x] = s2[z];
	array[x] = '\0';
	return (array);
}

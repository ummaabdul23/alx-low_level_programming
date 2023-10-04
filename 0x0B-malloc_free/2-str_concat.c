#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * str_concat - concatenate two strings
  * @s1: string1
  * @s2: string2
  *
  * Return: String
  */
char *str_concat(char *s1, char *s2)
{
	char *a = NULL;
	unsigned int x = 0, y = 0, z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*s1 != '\0')
		x++;
	while (*s2 != '\0')
		y++;
	a = malloc((x + y + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (z = 0; z < x; z++)
		a[z] = s1[z];
	x = z;
	for (z = 0; z < y; z++)
	{
		a[x] = s2[z];
		x++;
	}
	a[x] = '\0';
	return (a);
}

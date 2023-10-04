#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
  * strtow - a function that splits  a string into two
  * @str: String parameter
  *
  * Return: char
  */
char **strtow(char *str)
{
	char *a = NULL;
	unsigned int x = 0, y = 0, z;

	if (strncmp(str, "", 1) || str == NULL)
		return (NULL);
	a = malloc((x + y + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (z = 0; z < x; z++)
		a[z] = str[z];
	x = z;
	for (z = 0; z < y; z++)
	{
		a[x] = str[z];
		x++;
	}
	a[x] = '\0';
	return (NULL);
}

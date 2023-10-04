#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates an array of char and initializes to a char
  * @c: initializin char
  * @size: array size
  *
  * Return: char
  */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *s = malloc(size * sizeof(char));

	if (size == 0 || s == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		s[x] = c;
	return (s);
}

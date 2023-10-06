#include "main.h"

/**
 * _strlen - calculate the length of a given string
 * @s: the given string
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		counter++;
		s++;
	}
	return (counter);
}


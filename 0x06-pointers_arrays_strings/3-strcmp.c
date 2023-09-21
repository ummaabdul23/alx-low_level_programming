#include "main.h"

/**
 * _strcmp - compares strings
 * @s1: parameter 1
 * @s2: parameter 2
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

#include "main.h"

/**
 * _memset - a function the fills the memory with an n constant byte.
 * @s: parameter 1
 * @b: parameter 2
 * @n: parameter 3
 *
 *Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
		}
		return (s);
		}


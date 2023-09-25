#include "main.h"

/**
 * _strpbrk - function locates the first occurrence of s in accept
 * @s: first string parameter
 * @accept: second string parameter
 *
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		j = 0;
		s++;
	}
	return ('\0');
}

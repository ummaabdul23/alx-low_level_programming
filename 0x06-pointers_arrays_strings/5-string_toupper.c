#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @s: string parameter
 *
 * Return: string
 */
char *string_toupper(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] >= 'a' && s[x] <= 'z')
			s[x] = s[x] - 32;
	}

	return (s);
}

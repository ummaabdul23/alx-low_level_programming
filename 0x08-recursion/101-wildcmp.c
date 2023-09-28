#include "main.h"

/**
 * _checker - check if two strings are similar
 * @s1: string_1 parameter
 * @s2: string_2 parameter
 * @x: index
 * @y: special index
 * Return: 1 or 0
 */

int _checker(char *s1, char *s2, int x, int y)
{
	if (s1[x] == '\0' && s2[y] == '\0')
		return (1);
	if (s1[x] == s2[y])
		return (_checker(s1, s2, x + 1, y + 1));
	if (s1[x] == '\0' && s2[y] == '*')
		return (_checker(s1, s2, x, y + 1));
	if (s2[y] == '*')
		return (_checker(s1, s2, x + 1, y) || _checker(s1, s2, x, y + 1));
	return (0);
}
/**
 * wildcmp - compare if two strings can be considered identical
 * @s1: string parameter 1
 * @s2: string paramwter 2
 *
 * Return: 1 if are considered identical.
 */
int wildcmp(char *s1, char *s2)
{
	return (_checker(s1, s2, 0, 0));
}

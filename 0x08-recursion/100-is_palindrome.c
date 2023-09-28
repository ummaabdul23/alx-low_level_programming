#include "main.h"

/**
  * _strlen_recursion - a function that checks if a string is palindrome
  * @s: string parameter
  *
  * Return: Alwaa\ys 0
  */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * _checker - checks for palindrome.
 * @s: string parameter
 * @x: left index.
 * @y: rigth index.
 * Return: 1 or 0
 */

int _checker(char *s, int x, int y)
{
	if (s[x] == s[y])
		if (x > y / 2)
			return (1);
		else
			return (_checker(s, x + 1, y - 1));
	else
		return (0);
}

/**
 * is_palindrome - a function that checks if a string is palindrome
 * @s: string parameter
 *
 * Return: Always 0
 */

int is_palindrome(char *s)
{
	return (_checker(s, 0, _strlen_recursion(s) - 1));
}

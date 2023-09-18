#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: the string to print
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	int length = 0;

	while (*s != '\0')
	{
		length++;
			s++;
	}
	for (i = length - 1; i >= 0; i--)
{
	_putchar(s[i]);
}
	_putchar('\n');
}


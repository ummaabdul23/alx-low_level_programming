#include "main.h"

/**
 * _puts - prints string
 * @str: the string to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
	str++;
	}
	_putchar('\n');
}

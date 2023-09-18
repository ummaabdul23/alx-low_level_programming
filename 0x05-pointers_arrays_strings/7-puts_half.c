#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the parameter string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, half;
	int length = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	half = (length - 1) / 2;
	for (i = half + 1; str[i] != '0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

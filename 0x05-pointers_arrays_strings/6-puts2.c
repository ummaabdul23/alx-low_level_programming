#include "main.h"

/**
 * puts2 - a function that print every other character
 * @str: the parameter string
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;
	int length = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

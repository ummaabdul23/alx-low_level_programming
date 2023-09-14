#include "main.h"

/**
 * print_numbers - print numbers using ASCII values
 *
 * Return: void
 */
void print_numbers(void)
{
	int i = 48;

	while (i < 59)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}

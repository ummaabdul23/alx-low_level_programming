#include "main.h"
#include <stdio.h>
/**
 * print_number - print an integer
 * @n: the character to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 == 0)
	{
		_putchar(n + '0');
	}
	else
	{
		print_number(n / 10);
		_putchar(n % 10 + '0');
	}
}

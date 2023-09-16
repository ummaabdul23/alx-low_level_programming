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
	int i = 0, j;

	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n > 0)
	{
		j = n % 10;
		i = i * 10 + j;
		n /= 10;
	}
	while (i > 0)
	{
		j = i % 10;
		_putchar(j + '0');
		i /= 10;
	}
}

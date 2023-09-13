#include "main.h"
/**
 * print_last_digit - print the last digit
 * @n: number to be checked
 *
 * Return: the last digit is returned
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);

}

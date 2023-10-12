#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of its parameters
 * @n: number of the arguments passed
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int x;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (x = 0; x < n; x++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}

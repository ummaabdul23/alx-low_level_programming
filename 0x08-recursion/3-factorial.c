#include "main.h"

/**
  * factorial - a function that returns the factorial
  * of a given number
  * @n: number parameter
  *
  * Return: int value
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	else if (n > 1)
		return (n * factorial(n - 1));
	return (0);
}

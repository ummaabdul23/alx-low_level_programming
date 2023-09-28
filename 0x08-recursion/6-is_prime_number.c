#include "main.h"
int calc_prime(int x, int y);

/**
  * is_prime_number - a function that checks for prime number
  * @n: parameter number
  *
  * Return: int value
  */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (calc_prime(n, 2));
}

/**
  * calc_prim - finds multiple of n
  * @x: number parameter
  * @y: number parameter
  * Return: int value
  */

int calc_prime(int x, int y)
{
	if (y == x)
		return (1);
	if (x % y == 0)
		return (0);
	else
		return (calc_prime(x, y + 1));
}

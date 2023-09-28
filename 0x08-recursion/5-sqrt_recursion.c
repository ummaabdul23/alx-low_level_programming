#include "main.h"
int _square(int x, int y);

/**
  * _sqrt_recursion -  a function that returns the natural
  * square root of a number
  * @n: number parameter
  *
  * Return: int value
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_square(n, 2));
}

/**
  * _square - finds the square root of anatural number
  * @x: parameter base
  * @y: parameter iterator
  *
  * Return: int value
  */

int _square(int x, int y)
{
	if (y * y == x)
		return (y);
	if (y * y > x)
		return (-1);
	else
		return (_square(x, y + 1));
}

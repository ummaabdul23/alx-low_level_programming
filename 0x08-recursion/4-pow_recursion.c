#include "main.h"

/**
  * _pow_recursion - function that do x raised to the power of y
  * @x: number parameter
  * @y: power parameter
  *
  * Return: int value
  */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (0);
	if (y == 1)
		return (x);
	if (y > 1)
		return (x * _pow_recursion(x, y - 1));
	else
		return (-1);
}


#include "main.h"
/**
 * _abs - calculates the absolute value of integer
 * @c: the number to be c\alculated
 * Return: absolute value or 0
 */
int _abs(int c)
{
	if (c < 0)
	{
	int value = c * -1;

	return (value);
	}
	return (c);
}


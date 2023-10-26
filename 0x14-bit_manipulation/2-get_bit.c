#include "main.h"

/**
 * get_bit - returns the value of a bit at an index
 * @n: number parameter
 * @index: the given index
 * Return: the value at an index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size = sizeof(n) * 8;
	unsigned long int mask = 1UL << index;

	if (index >= size)
		return (-1);
	if ((n & mask) == mask)
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number parameter
 * @index: the given index
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index) {
	unsigned int size = sizeof(*n) * 8;
	unsigned long int mask = 1UL << index;

	if (index >= size) {
		return (-1);
	}
	*n |= mask;

	return (1);
}

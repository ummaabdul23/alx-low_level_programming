#include "main.h"

/**
 * _islower - Prints the lower case letter
 * @c: character tobe checked
 *
 * Return: value is 1 if successful
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

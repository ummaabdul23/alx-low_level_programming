#include "main.h"

/**
  * binary_to_uint - converts a binary to unsigned int
  * @b: pointer to a string of 0 and 1 chars
  * Return: the converted nymber or 0
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	if (b == NULL)
		return (0);
	result = 0;

	while (*b)
	{
		if (*b == '1')
			result = (result << 1) | 1;
		else if (*b == '0')
			result = result << 1;
		else
			return (0);
		b++;
	}
	return (result);
}

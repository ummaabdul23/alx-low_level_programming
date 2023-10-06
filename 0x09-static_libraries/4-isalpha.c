#include "main.h"
/**
 * _isalpha - Prints the lower case letter
 * @c: character tobe checked
 *
 * Return: value is 1 if successful
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

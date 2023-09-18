#include "main.h"

/**
 * rev_string - a function that reverses string
 * @s: the string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, a;
	char b;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	a = length - 1;
	for (i = 0; i < length / 2; i++)
	{
		b = s[i];
		s[i] = s[a - i];
		s[a - i] = b;
	}
}

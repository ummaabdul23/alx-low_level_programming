#include "main.h"

/**
 * *_strncpy - a function that copies a string
 * @dest: destination parameter
 * @src: source parameter
 * @n: the number parameter
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (src[x] != '\0' && x < n)
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}

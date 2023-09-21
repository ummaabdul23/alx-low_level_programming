#include "main.h"

/**
 * *_strncat - a function that concatenates two strings
 * and uses at most n byte of from src
 * @dest: destination parameter
 * @src: source parameter
 * @n: the number parameter
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int count = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;

		for (j = 0; src[j] != '\0'; j++, i++)
		{
			dest[i] = src[j];
			count++;
			if (count == n || src[j] == '\0')
				break;
				}
				if (count < n)
				{
					dest[i] = '\0';
				}
				return (dest);
				}

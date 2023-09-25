#include "main.h"

/**
 * _strstr - a function that finds the first occurrence of substring needle
 * in string haystack
 * @haystack: substring 1
 * @needle: substring 2
 *
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	int count = 0;
	int a = 0;
	int j = 0;
	int i = 0;
	int b, c;
	char *p;

	while (needle[count] != '\0')
	{
		count++;
		}
		while (haystack[i] != '\0')
		{
			i++;
			}
			if (count == 0)
				return (haystack);
				while (haystack[j] != '\0')
				{
					if (haystack[j] == needle[0])
					{
						p = &haystack[j];
						c = j;
						a = 0;
					for (b = 0; b < count; b++)
					{
					if (haystack[c] == needle[b])
						a++;
						c++;
						}
						}
					if (a == count)
						return (p);
						j++;
						}
						return ('\0');
						}

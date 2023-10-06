#include "main.h"

/**
  * _strspn - function that returns the length of a prefix substring
  * @s: string parameter
  * @accept: sub string paramter
  *
  * Return: unsigned int
  */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;

	for (i = 0; s[i] != ' ' && s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				count++;
				}
				j = 0;
				}
				return (count);
				}

#include "main.h"

/**
  * _memcpy - the function copies n bytes of memory area from src dest
  * @dest: destination parameter
  * @src: source parameter
  * @n: the number parameter
  *
  * Return: char
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
		}
		return (dest);
		}

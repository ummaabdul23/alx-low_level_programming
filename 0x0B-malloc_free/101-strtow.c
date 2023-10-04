#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
  * strtow - a function that splits  a string into two
  * @str: String parameter
  *
  * Return: char
  */
char **strtow(char *str)
{
	char **d;
	int i;
	int j = 0;
	int con = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] != 32)
			con++;
	}

	d = malloc(sizeof(char) * con);

	if (d == NULL)
		return (NULL);

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] != 32)
		{
			*d[j] = str[i];
			j++;
		}
		else
		{
		}
	}
	return (d);
}

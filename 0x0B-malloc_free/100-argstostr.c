#include "main.h"
#include <stdlib.h>
/**
  * argstostr - concatenates its arguments
  * @ac: number of strings to concatenate
  * @av: strings to concatenate
  *
  * Return: String
  */
char *argstostr(int ac, char **av)
{
	int x, y, z = 0;
	char *join = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
		for (y = 0; av[x][y] != '\0'; y++)
			z++;
	join = malloc(sizeof(char) * (z + ac + 1));
	if (join == NULL)
		return (NULL);
	for (x = 0, z = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++, z++)
			join[z] = av[x][y];
		join[z] = '\n';
		z++;
	}
	join[z] = '\0';
	return (join);
}

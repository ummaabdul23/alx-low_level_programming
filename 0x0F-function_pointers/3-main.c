#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - entry point
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: integer value
  */

  int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int x, y;
	char *p;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	p = argv[2];
	y = atoi(argv[3]);

	if (get_op_func(p) == NULL || p[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*p == '/' && y == 0) ||
	    (*p == '%' && y == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(p)(x, y));

	return (0);
}

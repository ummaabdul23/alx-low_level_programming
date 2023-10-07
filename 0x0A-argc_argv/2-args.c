#include <stdio.h>

/**
  * main - print all arguments
  * @argc: argument count
  * @argv: argument vector
  * Return: Always 0 (Success)
  */

int main(int argc, char **argv)
{
	int x = 0;

	while (x < argc)
	{
		printf("%s\n", argv[x]);
		x++;
	}
	return (0);
}

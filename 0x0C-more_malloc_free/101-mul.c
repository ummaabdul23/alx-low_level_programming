#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 or 1
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("%s\n", "Error");
		exit(98);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

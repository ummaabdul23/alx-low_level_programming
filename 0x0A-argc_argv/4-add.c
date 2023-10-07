#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - sum variables
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int x, y, sum;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[x]);
	}
	printf("%i\n", sum);
	return (0);
}

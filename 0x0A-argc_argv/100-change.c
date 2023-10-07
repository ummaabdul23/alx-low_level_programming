#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the minimum number of coins to
  * make change for an amount of money
  * @argc: argument count
  * @argv: argument vector
  * Return: always 0 for sucess
  */

int main(int argc, char **argv)
{
	int x, y;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	y = atoi(argv[1]);

	for (x = 0; y > 0; x++)
	{
		if (y - 25 >= 0)
			y = y - 25;
		else if (y - 10 >= 0)
			y = y - 10;
		else if (y - 5 >= 0)
			y = y - 5;
		else if (y - 2 >= 0)
			y = y - 2;
		else if (y - 1 >= 0)
			y = y - 1;
	}
	printf("%d\n", x);
	return (0);
}

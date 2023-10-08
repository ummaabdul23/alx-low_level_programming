#include <stdio.h>
#include <stdlib.h>

int _atoi(char *s);
int _isdigit(char *argv);
/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 or 1
 */

int main(int argc, char **argv)
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	printf("%i\n", _atoi(argv[1]) * _atoi(argv[2]));
	for (i = 1; i < argc; i++)
	{
		if (_isdigit(argv[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	return (0);
}

/**
  * _isdigit - tells if the string consists of digits
  * @argv: pointer to current item in argument
  * Return: return 0 if all digits, 1 if not all digits.
  */

int _isdigit(char *argv)
{
	int i;

	i = 0;
	while (argv[i])
	{
		if (argv[i] >= '0' && argv[i] <= '9')
			i++;
		else
			return (1);
	}
	return (0);
}

/**
  * _atoi - converts ascii digits to the values they represent
  * @s: pointer to the source string
  *
  * Return: value of digits
  */

int _atoi(char *s)
{
	int i, result;

	i = result = 0;
	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result += (s[i] - '0');
		}
		i++;
	}
	return (result);
}

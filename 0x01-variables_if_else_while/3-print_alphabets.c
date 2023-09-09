#include <stdio.h>

/**
  *main - an entry point for the code
  *
  *Return: always 0 (Success)
  */
int main(void)
{
	int i, j;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
		for (j = 'A'; j <= 'Z'; j++)
		{
			putchar(j);
		}
	putchar('\n');
	return (0);
}


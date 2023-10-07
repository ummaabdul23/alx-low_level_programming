#include <stdio.h>

/**
  * main - entry point
  * @argc: argument count
  * @argv: arguments vector
  * Return: always 0 (Success)
  *
  */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", --argc);
	return (0);
}

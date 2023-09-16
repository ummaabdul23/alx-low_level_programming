#include "main.h"
#include <stdio.h>
/**
 * largest_prime - prints the largest prime factor
 * @n: number whose prime is to be gotten
 * Return: largest prime factor
 */

long int largest_prime(long int n)
{
	long int prime = 2;

	while (prime <= n)
	{
		if (n % prime == 0)
		{
			n /= prime;
		}
		else
		{
			prime += 1;
		}
	}
	printf("%li\n", prime);
	return (prime);
}

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	largest_prime(612852475143);
	return (0);
}


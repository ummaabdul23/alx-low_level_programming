#include "3-calc.h"
/*
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
*/
/**
 * op_add - sum of two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: sum
 */
int op_add(int x, int y)
{
	return (x + y);
}

/**
 * op_sub - difference of two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: difference
 */
int op_sub(int x, int y)
{
	return (x - y);
}

/**
 * op_mul - product of two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: product
 */
int op_mul(int x, int y)
{
	return (x * y);
}

/**
 * op_div - division of two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: quotient
 */
int op_div(int x, int y)
{
	return (x / y);
}

/**
 * op_mod - remainder of the division of two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: remainder
 */
int op_mod(int x, int y)
{
	return (x % y);
}

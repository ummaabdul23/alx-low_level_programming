#include "main.h"

/**
  * _print_rev_recursion - a function that print a sring in reverse
  * @s: the string parameter
  *
  * Return: void
  */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}/*
void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_print_rev_recursion(s - 1);
		_putchar(s[0]);
	}
}*/

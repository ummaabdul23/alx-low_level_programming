#include "main.h"

/**
  * _strchr - function that finds a character in a string
  * @s: the string parameter
  * @c: the character to find
  *
  * Return: char
  */

  char *_strchr(char *s, char c)
  {
	  if (*s == '\0')
	  {
		  return (s);
	  }
	  while (*s)
	  {
		  if (*s == c)
		  {
			  return (s);
		  }
		  s++;
	  }
	  if (c == '\0')
	  {
		  return (s);
		  return ('\0');
	  }

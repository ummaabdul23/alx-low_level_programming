#include "variadic_functions.h"

/**
  * print_all - prints anything
  * @format: a list of arguments passed
  *
  * Return: void
  */

void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int x = 0, y, z = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(list, format);
	while (format && format[x])
	{
		y = 0;
		while (t_arg[y])
		{
			if (format[x] == t_arg[y] && z)
			{
				printf(", ");
				break;
			} y++;
		}
		switch (format[x])
		{
		case 'c':
			printf("%c", va_arg(list, int)), z = 1;
			break;
		case 'i':
			printf("%d", va_arg(list, int)), z = 1;
			break;
		case 'f':
			printf("%f", va_arg(list, double)), z = 1;
			break;
		case 's':
			str = va_arg(list, char *), z = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} x++;
	}
	printf("\n"), va_end(list);
}

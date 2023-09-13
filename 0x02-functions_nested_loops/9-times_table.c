#include "main.h"
/**
 * times_table - print out the times table
 *
 * Return: void
 */
void times_table(void)
{
	int p, q, r, s, t;

	for (p = 0; p < 9; p++)
	{
		for (q = 0; q < 9; q++)
		{
			r = p * q;
			if (r > 9)
			{
				s  = r % 10;
				t = (r - s) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(t + '0');
				_putchar(s + '0');
			}
			else
			{
				if (q != 0)
				{
					_putchar(44);
					_putchar(44);
					_putchar(32);
				}
				_putchar(r + '0');
			}
		}
		_putchar('\n');
	}
}

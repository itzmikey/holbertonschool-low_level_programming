#include "holberton.h"

/**
 * times_table  - Print out 9x9 table starting with 0
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int a;
	int b;
	int d1;
	int d2;
	int x;

	for (a = 0; a < 10; a++)
	{
		_putchar(48);
		for (b = 1; b < 10; b++)
		{
			x = a * b;

			if (x <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(x + 48);
			}
			else
			{
				d1 = x / 10;
				d2 = x % 10;
				_putchar(',');
				_putchar(' ');
				_putchar(d1 + 48);
				_putchar(d2 + 48);
			}
		}
		_putchar('\n');
	}
}

#include "holberton.h"

/**
 * print_times_table - Print out table starting with 0
 * @n: Change text
 */
void print_times_table(int n)
{
	int a;
	int b;
	int x;

	if (n > 15 || n < 0)
		return;

	for (a = 0; a < n + 1; a++)
	{
		_putchar('0');
		for (b = 1; b < n + 1; b++)
		{
			x = a * b;
			_putchar(',');
			_putchar(' ');
			if (x < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(x + '0');
			}
			else if (x < 100)
			{
				_putchar(' ');
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
			}
			else
			{
				_putchar(x / 100 + '0');
				_putchar((x / 10) % 10 + '0');
				_putchar(x % 10 + '0');
			}
		}
		_putchar('\n');
	}
}

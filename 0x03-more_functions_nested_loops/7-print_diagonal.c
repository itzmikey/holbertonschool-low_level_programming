#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: Changable text
 */
void print_diagonal(int n)
{
	int i;
	char c;

	for (i = 0; i < n; i++)
	{
		for (c = 0; c <= i; c++)
		{
			if (c != i)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('\\');
			}
		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}

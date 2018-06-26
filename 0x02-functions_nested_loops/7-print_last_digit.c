#include "holberton.h"

/**
 * print_last_digit - Prints last digit only
 * @r: Change of text
 * Return: Always 0.
 */
int print_last_digit(int r)
{
	int m;

	if (r < 0)
	{
		m = r % 10;
	}
	else
	{
		m = -r % 10;
	}
	_putchar(m + '0');
	return (m);
}

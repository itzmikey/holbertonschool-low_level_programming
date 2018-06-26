#include "holberton.h"

/**
 * print_last_digit - Prints the last digit
 * @r: Change text
 * Return: Always 0.
 */
int print_last_digit(int r)
{
	char m;

	if (r >= 0)
		m = r % 10;
	else
		m = -r % 10;
	_putchar(m + '0');
	return (m);
}

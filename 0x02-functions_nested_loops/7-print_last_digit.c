#include "holberton.h"

/**
 * print_last_digit - Prints the last digit
 * @r: Change text
 * Return: Value of the last digit.
 */
int print_last_digit(int r)
{
	int m;

	if (r >= 0)
		m = r % 10;
	else
		m = -(r % 10);
	_putchar('0' + m);
	return (m);
}

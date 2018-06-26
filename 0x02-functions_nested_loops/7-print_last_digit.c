#include "holberton.h"

/**
 * print_last_digit - Prints last digits
 * @r: Change text
 * Return: m
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

#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 * Description - listing alphabet
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}

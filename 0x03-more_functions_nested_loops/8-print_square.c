#include "holberton.h"

/**
 * print_square - Print a square
 * @size: Square size
 */
void print_square(int size)
{
	int i;
	char c;

	for (i = 0; i < size; i++)
	{
		for (c = 0; c < size; c++)
		{
		_putchar('#');
		}
	_putchar('\n');
	}
}

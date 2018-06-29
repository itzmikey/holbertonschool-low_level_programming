#include "holberton.h"

/**
 * print_triangle - Print a triangle
 * @size: Size of the triangle
 */
void print_triangle(int size)
{
	int row;
	int line;
	int space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (row = 0; row < size; row++)
	{
		for (line = 0; line < size; line++)
		{
			space = size - row - 1;
			if (line < space)
			{
				_putchar(' ');
			}
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}

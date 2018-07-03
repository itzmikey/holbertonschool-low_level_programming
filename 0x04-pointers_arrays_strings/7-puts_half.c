#include "holberton.h"

/**
 * puts_half - Print half of the string
 * @str: String of numbers
 */
void puts_half(char *str)
{
	int i, c;

	for (i = 0; str[i] != 0; i++)
	{}
	c = (i + 1) / 2;
	while (str[c] != 0)
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}

#include "holberton.h"

/**
 * puts_half - puts half of the string
 * @str: String of numbers
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		if (i >= 5)
		_putchar(str[i]);
	}
	_putchar('\n');
}

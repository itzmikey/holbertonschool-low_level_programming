#include "holberton.h"
#include <stdio.h>

/**
 * _isdigit - function that checks for a digit (0 through 9)
 * @c: Changable text
 * Return: 0 if it is not a digit otherwise return 1.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')

		return (1);

	else

		return (0);
}

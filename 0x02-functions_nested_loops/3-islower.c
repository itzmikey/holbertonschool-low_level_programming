#include "holberton.h"

/**
 * _islower - return 1 if its lower case other wise return 0
 * @c: Change letter
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

#include "holberton.h"
#include <stdio.h>

/**
 * _isupper - Define c is an uppercase if is then 1
 * @c: Variable text
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

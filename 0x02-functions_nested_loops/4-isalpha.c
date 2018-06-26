#include "holberton.h"

/**
 * _isalpha - Return 1 for upper and lower letter otherwise return 0
 * @c: Change text
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

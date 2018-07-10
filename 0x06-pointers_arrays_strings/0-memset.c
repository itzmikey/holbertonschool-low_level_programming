#include "holberton.h"
#include <stdio.h>

/**
 * _memset - function that fills memory with a constant byte.
 * @s: Pointer space
 * @b: Constant byte
 * @n: Memory spaces to be filed
 * Return: 's' pointer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

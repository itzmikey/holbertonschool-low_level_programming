#include "holberton.h"
#include <stdio.h>

/**
 * _strncat - Append two strings numbers of n
 * @dest: String 2
 * @src: String 1
 * @n: Number of bytes
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int c;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (c = 0; src[c] != '\0' && c < n; c++)
	{
		dest[i] = src[c];
		i++;
	}
	return (dest);
}

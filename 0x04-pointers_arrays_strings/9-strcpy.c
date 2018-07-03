#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - Copies string to buffer point
 * @dest: Location of destination
 * @src: String to copy
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

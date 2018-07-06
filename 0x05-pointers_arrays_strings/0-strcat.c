#include "holberton.h"
#include <stdio.h>

/**
 * _strcat - Write a function to append two strings
 * @dest: Append starting location
 * @src: String to append
 * Return: destination.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int n;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (n = 0; src[n] != '\0'; n++)
	{
		dest[i] = src[n];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

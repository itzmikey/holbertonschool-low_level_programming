#include "holberton.h"
#include <stdio.h>

/**
 * _strncpy - Write a function that copies a string
 * @dest: String copy to
 * @src: String to copy
 * @n: Number of bytes
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
        for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

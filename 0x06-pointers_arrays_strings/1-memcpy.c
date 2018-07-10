#include "holberton.h"
#include <stdio.h>

/**
 * _memcpy - Write a fuction that copies memory area.
 * @dest: Destination for the copied memory
 * @src: Memory to copy
 * @n: Byte to be copy from src
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}

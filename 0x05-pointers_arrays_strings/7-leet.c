#include "holberton.h"
#include <stdio.h>

/**
 * leet - Encoding the letters to numbers value
 * @n: Encode the value
 * Return: Always 0.
 */
char *leet(char *n)
{
	int i, c;
	char *lt = "aAeEoOtTlL";
	char *dt = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
		for(c = 0; lt[c] != '\0'; c++)
			if (n[i] == lt[c])
			{
				n[i] = dt[c];
			}
	return (n);
}

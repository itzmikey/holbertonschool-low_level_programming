#include "holberton.h"
#include <stdio.h>

/**
 * rot13 - Encode the string with rot13 base
 * @n: Letter of the string
 * Return: n.
 */
char *rot13(char *n)
{
	int i, c;
	char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (c = 0; alpha[c] != '\0'; c++)
		{
			if (n[i] == alpha[c])
			{
				n[i] = rot13[c];
				break;
			}
		}
	}
	return (n);
}

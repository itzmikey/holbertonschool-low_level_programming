#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - Reverse string
 * @s: string to be reversed
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i;
	int n = 0;
	int c;

	while (s[n] != '\0')
	{
		n++;
	}
	for (i = 0; i < n / 2; i++)
	{
		c = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = c;
	}
}

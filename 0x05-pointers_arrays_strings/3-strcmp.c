#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - Compare two strings.
 * @s1: String 1
 * @s2: String 2
 * Return: An integer less than, equal to, or greater than zero.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != 0; i++)
	{
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else
			return (0);
	}
	return (0);
}

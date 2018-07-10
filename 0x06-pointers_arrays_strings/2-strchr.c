#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - Locates a charater from a string
 * @s: String of charaters
 * @c: Character to look for
 * Return: NULL if no letter repeats else return the first repeat charater.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == c)
		return (s + i);
	return (NULL);
}

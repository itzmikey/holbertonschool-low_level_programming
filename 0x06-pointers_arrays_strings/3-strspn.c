#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - Write a function that gets the length of a prefix substring.
 * @s: String to use to search for prefix
 * @accept: initial segment
 * Return: 'num' of bytes from the initial segment.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, num;

	for (i = 0; i == num; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				num++;
			break;
			}
		}
	}
	return (num);
}

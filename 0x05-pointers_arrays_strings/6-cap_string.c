#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - Capitalize all beginning first letter
 * @n: String words
 * Return: String
 */
char *cap_string(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[0] >= 'a' && n[0] <= 'z')
			n[i] = n[i] - 32;
			while (n[i] == ' ' ||
			       n[i] == '\t' ||
			       n[i] == '\n' ||
			       n[i] == ',' ||
			       n[i] == ';' ||
			       n[i] == '.' ||
			       n[i] == '!' ||
			       n[i] == '?' ||
			       n[i] == '"' ||
			       n[i] == '(' ||
			       n[i] == ')' ||
			       n[i] == '{' ||
			       n[i] == '}')
			{
				i++;
				if (n[i] >= 'a' && n[i] <= 'z')
					n[i] = n[i] - 32;
			}
	}
	return (n);
}

#include "holberton.h"
#include <stdio.h>

/**
 * set_string - Set a value of pointer to char.
 * @s: Pointer
 * @to: Set to char
 */
void set_string(char **s, char *to)
{
	*s = to;
}

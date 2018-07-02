#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - To swap integers
 * @a: Pointer a
 * @b: Pointer b
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

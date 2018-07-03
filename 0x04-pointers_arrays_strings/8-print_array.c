#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Define n into array of integers.
 * @a: Arrays
 * @n: Print amount
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	if (i != n - 1)
		printf(", ");
	}
	printf("\n");
}

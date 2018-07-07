#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - Reverse the content of the array
 * @a: Array of integers
 * @n: Elements to swap
 */
void reverse_array(int *a, int n)
{
	int i;
	int c;

	for (i = 0; i < n; i++)
	{
		c = a[i];
		a[i] = a[n - 1];
		a[n - 1] = c;
		n--;
	}
}

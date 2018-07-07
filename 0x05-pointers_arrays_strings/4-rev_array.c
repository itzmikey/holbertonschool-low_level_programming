#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - Reverse the content of the array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0, n = n - 1; i <= n; i++ ,n--)
	{
		c = a[i];
		a[i] = a[n];
		a[n] = c;
	}
}

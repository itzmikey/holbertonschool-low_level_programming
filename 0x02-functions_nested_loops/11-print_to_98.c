#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - Print from n to 98
 * @n: Starting point
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ",n);
		n--;
	}
	if (n == 98)
		printf("%d\n", n);
}

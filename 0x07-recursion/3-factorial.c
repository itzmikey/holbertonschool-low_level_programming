#include "holberton.h"
#include <stdio.h>

/**
 * factorial - Return the factorial number.
 * @n:Factorial number
 * Return: -1 if n is less then n,else 1 or 0.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}

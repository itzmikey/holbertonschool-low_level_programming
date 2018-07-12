#include "holberton.h"
#include <stdio.h>

/**
 * sqrt_function - to get sqaureroot program
 * @n: Squareroot number
 * @i: Integers
 * Return: Squareroot number.
 */
int sqrt_function(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (sqrt_function(n, i + 1));
}

/**
 * _sqrt_recursion - return the natural sqaureroot of a number
 * @n: Number of squareroot
 * Return: Squareroot number
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	return (sqrt_function(n, i));
}

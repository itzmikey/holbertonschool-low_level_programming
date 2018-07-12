#include "holberton.h"
#include <stdio.h>

/**
 * prime_function - Function to fine prime numbers
 * @n: Prime number
 * @i: prime factor
 * Return: 1 if its prime, otherwise 0.
 */
int prime_function(int n, int i)
{
	if (n == i)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (prime_function(n, i + 1));
}
/**
 * is_prime_number -  Is input integer a prime number
 * @n: Input integer
 * Return: 1 if its prime, otherwise 0.
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (prime_function(n, 2));
}

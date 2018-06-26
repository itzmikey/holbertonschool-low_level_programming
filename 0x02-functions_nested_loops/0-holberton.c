#include "holberton.h"

/**
 * main - Prints "Holberton"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c[10] = "Holberton\n";

	for (i = 0; i < 10; i++)
	{
		_putchar(c[i]);
	}
	return (0);
}

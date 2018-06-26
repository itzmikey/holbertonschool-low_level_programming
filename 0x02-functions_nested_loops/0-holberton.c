#include "holberton.h"

/**
 * main - Prints "Holberton"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	char c[] = "Holberton";

	while (c[n] != '\0')
		_putchar(c[n++]);

	_putchar('\n');

	return (0);
}

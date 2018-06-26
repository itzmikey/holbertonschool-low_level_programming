#include "holberton.h"

/**
 * jack_bauer - Display the 24 hour clock
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h <= 23; h++)
		for (m = 0; m <= 59; m++)
		{
			putchar(h / 10 + 48);
			putchar(h % 10 + 48);
			putchar(':');
			putchar(m / 10 + 48);
			putchar(m % 10 + 48);
			putchar('\n');
		}
	return 0;
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int i;

	for (n = 48; n <= 57; n++)
	{
		for (i = 48; i <= 57; i++)
		{
			putchar(n);
			putchar(i);
			if (n != 57 || i != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}

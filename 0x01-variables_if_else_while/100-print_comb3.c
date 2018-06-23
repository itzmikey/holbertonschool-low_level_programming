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

	for (n = 0; n < 9; n++)
		for (i = n + 1; i < 10; i++)
		{
			putchar(n + 48);
			putchar(i + 48);
			if (n == 8 && i == 9)
				break;
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}

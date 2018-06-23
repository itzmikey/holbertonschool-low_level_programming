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
	int m;

        for (n = 0; n < 8; n++)
                for (i = n + 1; i < 9; i++)
			for (m = i + 1; m < 10; m++)
			{
				putchar(n + 48);
				putchar(i + 48);
				putchar(m + 48);
			if (n == '7' && i == '8' && m == '9')
				break;
			putchar(',');
			putchar(' ');
			}
	putchar('\n');
	return (0);
}

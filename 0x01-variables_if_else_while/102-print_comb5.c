#include <stdio.h>

/**
 * main
 *
 * Return: Always 0.
 */
int main(void)
{
        int n;
        int i;

        for (n = 0; n < 99; n++)
                for (i = n+1; i < 100; i++)
			{
				putchar(n / 10 +48);
				putchar(n % 10 +48);
				putchar(' ');
				putchar(i / 10 +48);
				putchar(i % 10 +48);
			if (n == '98' && i == '99')
			break;
				putchar(',');
				putchar(' ');
			}
        putchar('\n');
        return (0);
}

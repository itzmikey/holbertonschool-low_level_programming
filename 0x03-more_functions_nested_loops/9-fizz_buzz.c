#include <stdio.h>

/**
 * main - Print to 100, Replace 3 with Fizz and 5 with Buzz
 * Return: Always 0.
 */

int main(void)
{
	int c;

	for (c = 1; c <= 100; c++)
	{
		if (c % 5 && c % 3)
			printf("%d", c);
		if (c % 5 == 0)
			printf("Buzz");
		if (c % 3 == 0)
			printf("Fizz");
		if (c < 100)
			printf(" ");
		else
			putchar('\n');
	}
	return (0);
}

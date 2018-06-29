#include <stdio.h>

/**
 * main - Print to 100, Replace 3 with Fizz and 5 with Buzz
 * Return: Always 0.
 */
int main(void)
{
	char n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 && n % 5)
			printf("%d", n);
		if (n % 3 == 0)
			printf("Fizz");
		if (n % 5 == 0)
			printf("Buzz");
		if (n < 100)
			printf(" ");
		else
			putchar('\n');
	}
	return (0);
}

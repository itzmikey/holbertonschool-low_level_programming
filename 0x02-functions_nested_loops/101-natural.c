#include <stdio.h>

/**
 * main - List out all multiples of 3 and 5
 * Return: Always 0
 */
int main(void)
{
	int a;
	int x;

	x = 0;
	for (a = 0; a < 1024; a++)
		if (a % 3 == 0 || a % 5 == 0)
			x += a;
	printf("%d\n" x);
	return (0);
}

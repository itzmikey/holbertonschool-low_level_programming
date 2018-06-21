#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int star;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	star = n % 10;

	printf("Last digit of %d is ", n, star);
	if (star > 5)
		printf("%d and is greater than 5\n", star);
	else if (star == 0)
		printf("%d and is 0\n", star);
	else if (star < 6)
		printf("%d and is less than 6 and not 0\n", star);
	return (0);
}

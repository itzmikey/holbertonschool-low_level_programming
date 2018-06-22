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
	char Word;

	for (Word = 'a'; Word <= 'z'; Word++)
		putchar(Word);
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char Word;

	for (Word = 'z'; Word >= 'a'; Word--)
		putchar(Word);
	putchar('\n');
	return (0);
}

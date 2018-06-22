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
	{
		if (Word != 'q' && Word != 'e')
		{
			putchar(Word);
		}
	}
	putchar('\n');
	return (0);
}

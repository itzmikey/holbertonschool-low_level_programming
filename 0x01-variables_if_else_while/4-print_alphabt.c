#include <stdio.h>

/**
 */
int main(void)
{
        char Word;

        for (Word = 'a'; Word <= 'z'; Word++)
		if (Word != 'q'|| Word != 'e')
                putchar(Word);
        putchar('\n');
        return (0);
}

#include "main.h"
/**
 *print_alphabet_x10 -prints the aplhabet 10 times
 *return: always 0 if sucess
*/
void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		
			_putchar('\n');
		}
	}
}

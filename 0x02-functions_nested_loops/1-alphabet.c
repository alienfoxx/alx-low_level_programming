#include "main.h"
/**
 *print_alphabet - prints the alphabet in lowercase
 * main is etnry point
 *return is always 0 if success
*/
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

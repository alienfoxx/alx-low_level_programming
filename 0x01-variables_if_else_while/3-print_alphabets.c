#include<stdio.h>
/**
 *main -is entry point
 *Return: Always 0 if program is excute successfully
*/
int main(void)
{
	char ALPHABET = 'A';

	while (ALPHABET <= 'Z')
	{
	putchar(ALPHABET);
	ALPHABET++;
	}
	putchar('\n');
	return (0);
}

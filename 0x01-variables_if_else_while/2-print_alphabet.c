#include <stdio.h>
/**
 *main - entry point
 *Return: always 0 if the program excute successfully
*/
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
	putchar(alphabet);
	alphabet++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 if the program executed successfully
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
	putchar(n);
	n--;
	}
	putchar('\n');
	return (0);
}

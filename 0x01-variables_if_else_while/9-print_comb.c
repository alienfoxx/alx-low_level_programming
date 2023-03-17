#include <stdio.h>
/**
 * main - entry point*
 * Return: always 0 if the program executed successfully
*/
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
	putchar(n);
	if (n == 57)
	{
		break;
	}
	putchar(',');
	putchar(' ');
	n++;
	}
	putchar('\n');
	return (0);
}

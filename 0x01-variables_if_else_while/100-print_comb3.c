#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 if the program executed successfully
*/
int main(void)
{
	int n;
	int m;

	for (n = 0; n <= 8; n++)
	{
	for (m = n + 1 ; m <= 9; m++)
	{
		if (n < 9 || m < 9)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(n + 48);
		putchar(m + 48);
	}
	}
	putchar('\n');
	return (0);
}

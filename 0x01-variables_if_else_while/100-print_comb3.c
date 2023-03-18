#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 if the program executed successfully
*/
int main(void)
{
	int n;
	int m;

	for (n = 0; n < 9; n++)
	{
		for (m = n + 1; m < 10; m++)
		{
			putchar((n % 10) + '0');
			putchar((m % 10) + '0');

			if (n == 8 && m == 9)
				continue;
			putchar(',');
			putchar(' ');

		}

	}
	putchar('\n');
	return (0);
}

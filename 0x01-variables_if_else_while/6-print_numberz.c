#include<stdio.h>
/**
 *main -is entry point
 *Return: Always 0 if program is excute successfully
*/
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}

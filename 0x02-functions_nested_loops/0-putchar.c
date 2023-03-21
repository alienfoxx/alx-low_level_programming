#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 if the program executed successfully
*/
int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i < 8 ; i++)
	{
	putchar(str[i]);
	}
	putchar('\n');
	return (0);
}

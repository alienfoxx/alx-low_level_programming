#include<stdio.h>
/**
 *main -is entry point
 *Return: Always 0 if program is excute successfully
*/
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}

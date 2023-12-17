#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of code
 * printf: prints code to stdout
 * Return: Always 0 on success
 */
int main(void)
{
	int i = 0;

	for (; i <= 9; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of code
 * putchar: prints code to stdout
 * Return: Always 0 on success
 */

int main()
{
	int i = 0;

	for (; i <= 16; i++)
	{
		if (i < 10)
		{
			putchar('0' + i);
		}
		else
		{
			putchar('a' + (i - 10));
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of code
 * putchar: prints code to stdout
 * Return: Always 0 on success
 */

int main(void)
{
	int i = 0;

	for (; i <= 9; i++)
	{
		putchar('0' + i);

		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

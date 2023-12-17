#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of code
 * putchar: prints code to stdout
 * Return: Always 0 on success
 */
int main(void)
{
	char i = 122;

	for (; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

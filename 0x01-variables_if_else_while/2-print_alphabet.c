#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of code
 * putchar: prints output to stdout
 * Return: Always 0 on success
 */

int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}

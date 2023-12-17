#include <stdio.h>
#include <stdlib.h>


/**
 * main - entry point of code
 * putchar: prints output to stdout
 * Return: Always 0 on success
 */

int main(void)
{
	char i = 97;

	for (; i <= 122; i++)
	{
		if (i == 101 || i == 113)
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}

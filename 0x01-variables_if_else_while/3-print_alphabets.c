#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of code
 * putchar: print output to standard output
 * Return: Always 0 on success
 */

int main(void)
{
	char j = 97;
	char i;

	for (i = 65; i <= 90; i++)
	{
		for (; j <= 122; j++)
		{
			putchar(j);
		}

		putchar(i);
	}
	putchar('\n');
	return (0);
}

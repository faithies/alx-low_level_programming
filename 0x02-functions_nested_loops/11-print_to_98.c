#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function name
 * @n: function argument
 * printf: prints to stdout
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}

	else
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("98\n");
}

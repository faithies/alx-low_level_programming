#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - function name
 * _putchar: prints result to stdout
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if ((num == 2) || (num == 4))
		{
			continue;
		}
		_putchar('0' + num);
	}
	_putchar('\n');
}

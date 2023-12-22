#include "main.h"

/**
 * print_numbers - function name
 * _putchar: prints to stdout
 */

void print_numbers(void)
{
	int num;

	num = 0;

	while (num <= 9)
	{
		_putchar('0' + num);
		num++;
	}
}

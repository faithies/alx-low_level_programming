#include "main.h"

/**
 * print_line - function name
 * @n: function parameter
 * _putchar: prints result to stdout
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');

	}

	for (i = 0; i < n; i++)
	{
		_putchar('-');
	}
	_putchar('\n');
}

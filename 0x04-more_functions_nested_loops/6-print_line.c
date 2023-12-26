#include "main.h"

/**
 * print_line - function name
 * @n: function parameter
 * _putchar: prints result to stdout
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}

		_putchar('-');
	}
	_putchar('\n');
}

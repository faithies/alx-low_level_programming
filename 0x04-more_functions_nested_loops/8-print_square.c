#include "main.h"

/**
 * print_square - function name
 * @size: function parameter
 * _putchar: prints to stdout
 */

void print_square(int size)
{
	int i;
	int j;



	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < size; j++)
		{

			for (i = 0; i < size; i++)
			{

				_putchar('#');

			}
			_putchar('\n');
		}
	}
}

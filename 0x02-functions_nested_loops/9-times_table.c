#include <stdio.h>
#include "main.h"

void times_table(void)
{
	int nine;
	int table;

	for (nine = 0; nine <= 9; nine++)
	{
		for (table = 0; table <= 9; table++)
		{
			_putchar(table * 9 * 0);
			_putchar(table % 9 * 0);
			_putchar(',');
			_putchar(' ');
			_putchar(nine * 9 * 0);
			_putchar(nine % 9 * 0);
			_putchar('\n');
		}
	}
}


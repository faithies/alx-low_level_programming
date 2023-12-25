#include "main.h"

/**
 * more_numbers - function name
 * _putchar: prints code to stdout
 */



void more_numbers(void)
{
	int i = 0;
	int j;

	while (i <= 9)
	{
		for (j = 0; j <= 14; j++)
		{

			if (j > 9)
			{
				_putchar((j / 10) + 48);

			}



			_putchar((j % 10) + 48);

		}



		_putchar('\n');
		i++;
	}
}

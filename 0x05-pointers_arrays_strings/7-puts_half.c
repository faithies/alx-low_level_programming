#include "main.h"
#include <stdio.h>

/**
 * puts_half - function name
 * @str: function parameter
 */

void puts_half(char *str)
{
	int length = 0;
	/*int start;*/
	int half_num;
	int iterator;

	while (str[length] != '\0')
	{
		length = length + 1;
	}

	half_num = (length + 1) / 2;

		for (iterator = half_num; iterator < length; iterator++)
		{
			_putchar(str[iterator]);
		}
		_putchar('\n');
}

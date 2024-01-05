#include "main.h"

/**
 * puts2 - function name
 * @str: function parameter
 */

void puts2(char *str)
{
	int iterator =  0;

	for (; str[iterator] != '\0'; iterator++)
	{
		if (iterator % 2 == 0)
		{
			_putchar(str[iterator]);
		}
	}
	_putchar('\n');

}

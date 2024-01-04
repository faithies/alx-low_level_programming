#include <stdio.h>
#include "main.h"

/**
 * _puts - function name
 * @str: function parameter;
 *
 */

void _puts(char *str)
{
	for(; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');

}

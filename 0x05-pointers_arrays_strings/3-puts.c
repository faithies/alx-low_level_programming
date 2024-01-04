#include <stdio.h>

/**
 * _puts - function name
 * @str: function parameter;
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		str++;
		putchar(*str);
	}

}

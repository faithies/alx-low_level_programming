#include "main.h"

/**
 * print_rev - function name
 * @s: function parameter
 */

void print_rev(char *s)
{
char *iterator = s;


	while (*iterator != '\0')
	{
		iterator++;
	}

	while (iterator > s)
	{
		iterator--;
		_putchar(*iterator);
	}
	_putchar('\n');
}

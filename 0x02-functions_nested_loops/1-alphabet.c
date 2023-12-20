#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - Function name
 * _putchar - Prints to stdout
 * @c: _putchar parameter
 * Return: Always 0 on success
 */

int _putchar(char c);

void print_alphabet(void)
{
	char c = 97;

	while (c <= 122)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

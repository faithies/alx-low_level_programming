#include <stdio.h>

/**
 * print_alphabet - Function name
 * _putchar - Prints to stdout
 * @c: _putchar parameter
 * Return: Always 0 on success
 */

int _putchar(char c);

void print_alphabet(void)
{
	char a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}

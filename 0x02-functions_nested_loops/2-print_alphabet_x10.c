#include "main.h"
#include <unistd.h>

/**
 * print_alphabet_x10 - function name
 * _putchar: prints to stdout
 * Return: Always 0 on success
 */

void print_alphabet_x10(void)
{
	char a;
	char b = 1;

	for (; b <= 10; b++)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}

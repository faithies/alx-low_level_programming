#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - function name
 * @n: function parameter
 * _putchar - prints to stdout
 * Return: The value of n on success
 */

int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	{
		n = -n;
	}


	_putchar('0' + n);
	return (n);
}

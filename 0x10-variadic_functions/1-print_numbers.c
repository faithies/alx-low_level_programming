#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers,
 * followed by a new line
 * @separator: pointer to character
 * @n: parameter list
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int iterator;
	int num;

	va_start(args, n);

	for (iterator = 0; iterator < n; iterator++)
	{
		num = va_arg(args, int);
		printf("%d", num);

	if (separator != NULL && iterator < n - 1)
	{
		printf("%s", separator);
	}

	}


	printf("\n");

	va_end(args);
}

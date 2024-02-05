#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings followed by a new line
 * @separator: is the string to be printed between strings
 * @n: is the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list args;

	unsigned int iterator;
	const char *ptr;

	va_start(args, n);

	for (iterator = 0; iterator < n; iterator++)
	{
		ptr = va_arg(args, const char *);

		if (ptr == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", ptr);
		}

		if (separator != NULL && iterator < n - 1)
		{
			printf("%s", separator);
		}

	}
		printf("\n");
		va_end(args);

}

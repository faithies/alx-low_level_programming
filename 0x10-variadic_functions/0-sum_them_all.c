#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - a function that returns the sum of all its parameter
 * @n: a constant parameter passed into the function
 *
 * Return: the sum of both integer
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	int sum;
	unsigned int iterator;

	sum = 0;

	va_start(args, n);


	for (iterator = 0; iterator < n; iterator++)
	{
		sum  = sum + va_arg(args, int);
	}

	va_end(args);
	return (sum);
}

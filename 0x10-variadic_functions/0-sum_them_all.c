#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - a function that returns the sum of all its parameter
 * @n: a constant parameter
 * Return: the sum of both integer
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	unsigned int sum;
	unsigned int iterator;
	unsigned int x;

	sum = 0;

	va_start(args, n);


	if (n == 0)
	{
		return (0);
	}

	for (iterator = 0; iterator < n; iterator++)
	{
		x = va_arg(args, int);
		sum = sum + x;
	}

	va_end(args);
	return (sum);
}

#include "main.h"
#include <stdio.h>

/**
 * _isdigit - function name
 * @c: function parameter
 * Return: Always 1 on sucesss and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 59)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}

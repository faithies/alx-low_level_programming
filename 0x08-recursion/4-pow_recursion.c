#include "main.h"

/**
 * _pow_recursion - function name to fine the power of a number
 * @x: function parameter
 * @y: function parameter to be raised
 * Return: Always 0 on success
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (0);
}

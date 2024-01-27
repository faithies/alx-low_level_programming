#include "3-calc.h"

/**
 * op_add - a function that takes two integers as its arguments
 * and returns the sum of its two arguments
 * @a: first argument to be sum
 * @b: second argument to be added to b
 * Return: the addition of both parameters
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that takes two integers as its arguments
 * and returns the subtraction of its two arguments
 * @a: first argument for subtraction
 * @b: second argument to be subtracted from a
 * Return: the subtraction of both parameters
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that takes two integers as its arguments
 * and returns the multiplication of its two arguments
 * @a: first argument for multiplication
 * @b: second argument to be multiplied by a
 * Return: the multiplication of both parameters
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that takes two integers as its arguments
 * and returns the division of its two arguments
 * @a: first argument for division
 * @b: second argument to divided from a
 * Return: the division of both parameters
 */

int op_div(int a, int b)
{
	if (b != 0)
	{
	return (a / b);
	}
	else
	{
		return (0);
	}
}

/**
 * op_mod - a function that takes two integers as its arguments
 * and returns the modulos of its two arguments
 * @a: first argument
 * @b: second argument
 * Return: the modulos of both parameters
 */

int op_mod(int a, int b)
{
	if (b != 0)
	{
	return (a % b);
	}
	else
	{
		return (0);
	}
}

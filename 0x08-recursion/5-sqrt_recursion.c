#include "main.h"

/**
 * _sqrt_recursion - function name
 * @n: parameter that returns the natural square root
 * Return: find_num(n) on success -1 on failure
 */

int find_num(int n, int num);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else
	{
		return (find_num(n, 0));
	}
}

/**
 * find_num - function name
 * @n: function parameters
 * Return: result on success -1 on failure
 */

int find_num(int n, int num)
{
	if (num * num == n)
	{
		return (num);

	}
	else if (num * num > n)
	{
		return (-1);
	}
	else
	{
		return (find_num(n, num + 1));
	}
return (0);
}

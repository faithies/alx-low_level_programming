#include "main.h"

/**
 * _sqrt_recursion - function name
 * @n: parameter that returns the natural square root
 * Return: find_num(n) on success -1 on failure
 */

int find_num(int n);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else
	{
		return (find_num(n));
	}
}

/**
 * find_num - function name
 * @n: function parameters
 * Return: result on success -1 on failure
 */

int find_num(int n)
{
	static int num;
	int result;

	if (num * num == n)
	{
		result = num;
		num = 0;
		return (result);

	}
	else if (num * num > n)
	{
		num = 0;
		return (-1);
	}
	else
	{
		num++;
		return (find_num(n));
	}
return (0);
}

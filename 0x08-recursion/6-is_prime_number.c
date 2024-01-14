#include "main.h"
/**
 * is_prime_number - function name
 * @n: function parameter
 * @num: function argument
 * Return: Always 0 on success and faith on failure
 */
int faith(int n, int num);

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (faith(n, 2));
	}

	return (0);
}

/**
 * faith - function name
 * @n: function argument
 * @num: function argument
 * Return: Always 0 on success
 */

int faith(int n, int num)
{
	if (num > n / 2)
	{
		return (1);
	}
	else if (n % num == 0)
	{
		return (0);
	}
	else
	{
		num++;
		return (faith(n, num));
	}
	return (0);
}

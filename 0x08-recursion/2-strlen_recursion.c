#include "main.h"

/**
 * _strlen_recursion - function name
 * @s: function parameter
 * Return: _strlen_recursion
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

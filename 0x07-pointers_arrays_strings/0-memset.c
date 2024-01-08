#include "main.h"
#include <stdio.h>

/**
 * *_memset - function name
 * @b: function argument
 * @n: n byte
 * @s: pointer to character
 * Return: a pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int iterator;

	for (iterator = 0; iterator < n; iterator++)
	{
		s[iterator] = b;
	}

	return (s);
}

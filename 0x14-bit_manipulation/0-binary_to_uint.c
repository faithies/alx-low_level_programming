#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - function name that converts a binary
 * to an unsigned int
 * @b: a pointer to strings of characters
 * Return: the converted number of 0 if there
 * is one of more char in the string that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{

	unsigned int num = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{

		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		num = num * 2 + (*b - '0');
		b++;
	}



	return (num);
}

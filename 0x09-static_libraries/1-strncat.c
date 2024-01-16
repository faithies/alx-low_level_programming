#include "main.h"

/**
 * _strncat - function name
 * @dest: function parameter
 * @src: function parameter
 * @n: number of function
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int iterator;
	int length = 0;

	for (iterator = 0; dest[iterator] != '\0'; iterator++)
	{
		length = length + 1;
	}

	for (iterator = 0; src[iterator] != '\0' && iterator < n; iterator++)
	{
		dest[length] = src[iterator];
		length++;
	}
	return (dest);
}

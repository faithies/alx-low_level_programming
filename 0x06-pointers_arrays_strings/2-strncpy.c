#include "main.h"

/**
 * _strncpy - function name
 * @dest: function parameter
 * @src: function parameter
 * @n: funcion parameter
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int iterator;

	for (iterator = 0; iterator < n && src[iterator] != '\0'; iterator++)
	{
		dest[iterator] = src[iterator];
	}
	for (; iterator < n; iterator++)
	{
		dest[iterator] = '\0';
	}
	return (dest);
}

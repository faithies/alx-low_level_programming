#include "main.h"
#include <stdio.h>
/**
 * *_memcpy - function name
 * @dest: pointer to the destination array
 * @src: pointer to the source of data to be copied
 * @n: the number of bytes to be copied
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int iterator;

	for (iterator = 0; iterator < n; iterator++)
	{
		dest[iterator] = src[iterator];
	}
	dest[iterator] = '\0';

	return (dest);
}

#include "main.h"

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
	int length = 0;

	for (iterator = 0; iterator != '\0'; iterator++)
	{
		length = length + 1;
	}
	for (iterator = 0; iterator < n; iterator++)
	{
		*dest = src[iterator];
	}
	dest = '\0';

	return (dest);
}

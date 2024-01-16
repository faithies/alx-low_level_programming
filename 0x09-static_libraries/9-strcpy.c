#include <stdio.h>

/**
 * *_strcpy - function name
 * @dest: function argument
 * @src: function second argument
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int length;
	int index;

	for (index = 0; src[index] != '\0'; index++)
	{
		length = length + 1;

	}

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
			dest[index] = '\0';
	return (dest);
}

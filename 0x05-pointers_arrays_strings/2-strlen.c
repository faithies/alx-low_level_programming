#include "main.h"
#include "string.h"

/**
 * _strlen - function name
 * @s: function parameter
 * Return: length of parameter
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

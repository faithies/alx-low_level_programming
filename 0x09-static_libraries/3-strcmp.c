#include "main.h"

/**
 * _strcmp - function name
 * @s1: function parameter
 * @s2: function parameter
 * Return: s1 - s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*(char *)s1 - *(char *)s2);
}

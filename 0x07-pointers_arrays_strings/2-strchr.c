#include "main.h"
#include <stdio.h>

/**
 * _strchr - function name
 * @s: pointer to character
 * @c: character to be search for by s
 * Return: A pointer to the first occurance of c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
return (0);
}

#include "main.h"

/**
 * _strchr - function name
 * @s: pointer to character
 * @c: character to be search for by s
 * Return: Always 0 on success
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

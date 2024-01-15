#include "main.h"
#include <string.h>

/**
 * _strpbrk - function name
 * @s: function string to check
 * @accept: character whose occurance is to be checked
 * Return: Always pointer to s on success and NULL if no character is found
 */

char *_strpbrk(char *s, char *accept)
{
	char *ptr;

	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}

	while (*s)
	{
		ptr = accept;

		while (*ptr)
		{
			if (*s == *ptr)
			{
				return (s);
			}
			ptr++;

		}
		s++;
	}
	return (NULL);
}

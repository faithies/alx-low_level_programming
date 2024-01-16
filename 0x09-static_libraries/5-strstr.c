#include "main.h"
#include <stdio.h>

/**
 * _strstr - function name
 * @haystack: function parameter string for check
 * @needle: function parameter substring
 * Return: pointer to the beginning of the located substring else NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *hay;
	char *need;

	while (*haystack != '\0')
	{
		hay = haystack;
		need = needle;

		while (*need != '\0' && *hay == *need)
		{
			hay++;
			need++;
		}

		if (*need == '\0')
		{
			return (haystack);
		}

	haystack++;
	}
	return (NULL);
}

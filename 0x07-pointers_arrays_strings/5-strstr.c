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
	char *ptr;

	if(haystack == NULL || needle == NULL)
	{
		return (NULL);
	}

	while (*haystack != '\0')
	{
		ptr = needle;

		while (*ptr != '\0')
		{
			if (*haystack == *ptr)
			{
				ptr++;
			}
			return (ptr);
		}
	}

	return (NULL);
}

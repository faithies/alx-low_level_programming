#include "main.h"
#include <string.h>


char *_strpbrk(char *s, char *accept)
{
	char *ptr;

	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}

	while (*s)
	{
		ptr = s;

		while (ptr)
		{
			if (*s == *ptr)
			{
				return (char *)s;
			}
			ptr++;
		}
		s++;
	}
	return (ptr);
}

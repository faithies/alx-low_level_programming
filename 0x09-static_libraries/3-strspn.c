#include "main.h"

/**
 * _strspn - function that returns the number of characters found in string
 * @s: specifies the string to search
 * @accept: specifies the character to search for
 * Return: Number of characters found in a string
 */

unsigned int _strspn(char *s, char *accept)
{
	int found;
	int iterator = 0;
	char *start_of_accept = accept;

	while (*s)
	{
		found = 0;

		while (*accept)
		{
			if (*s == *accept)
			{
				found = 1;
				break;
			}
			accept++;
		}

		if (!found)
		{
			break;
		}
		s++;
		iterator++;
		accept = start_of_accept;
	}
	return (iterator);
}

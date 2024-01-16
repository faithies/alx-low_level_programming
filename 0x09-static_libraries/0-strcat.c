#include "main.h"

/**
 * _strcat - function name
 * @dest: function parameter
 * @src: function parameter
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
char *des = dest;
	while (*des != '\0')
	{
		des++;
	}

	while (*src != '\0')
	{
		*des = *src;
		des++;
		src++;
	}
	*des = '\0';

	return (dest);
}



#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function name
 * @s1: destination string for concatanation
 * @s2: source strings of character for concatination
 * Return: pointer to the new  allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	char *dest;
	char *src;
	unsigned int length1 = 0;
	unsigned int length2 = 0;
	unsigned int iterator1 = 0;
	unsigned int iterator2 = 0;

	if (s2 == NULL)
	{
		return (NULL);
	}
	while (s1 != NULL && s1[length1] != '\0')
	{
		length1++;
	}
	while (s2[length2] != '\0')
	{
		length2++;
	}
	dest = malloc(sizeof(char) * (length1 + length2 + 1));
	src = malloc(sizeof(char) * (length2 + 1));
	if (dest == NULL || src == NULL)
	{
		free(dest);
		free(src);
		return (NULL);
	}
	while (iterator1 < length1)
	{
		dest[iterator1] = s1[iterator1];
		iterator1++;
	}
	while (iterator2 < length2)
	{
		dest[iterator1] = s2[iterator2];
		iterator1++;
		iterator2++;
	}
	dest[iterator1] = '\0';
	return (dest);
}

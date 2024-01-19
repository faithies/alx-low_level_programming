#include "main.h"
#include <stdlib.h>

/**
 * create_array - function name
 * @size: number of elements to be created
 * @c: a character used for initializing each element of the array
 * Return: pointer to the allocated memory
 */

char *create_array(unsigned int size, char c)
{
	unsigned int iterator;
	char *str;

	str = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}

	for (iterator = 0; iterator < size; iterator++)
	{
		str[iterator] = c;
	}

	return (str);
}

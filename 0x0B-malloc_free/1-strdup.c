#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function name that returns a pointer to the new string
 * which is a duplicate of the string str
 * @str: a pointer to the null-terminated string to be duplicated
 * if NULL the fuction returns NULL indicating an error
 * Return: pointer to the new allocated memory which is the duplicated string
 */
char *_strdup(char *str)
{

	char *ptr;
	unsigned int temp;
	unsigned int length = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	ptr = malloc(sizeof(char) * length + 1);

	for (temp = 0; temp <= length; temp++)
	{
		ptr[temp] = str[temp];
	}


	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
}

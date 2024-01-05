#include "main.h"
#include <stdio.h>

/**
 * rev_string - function name
 * @s: function argument
 */

void rev_string(char *s)
{
	char *iterator = s;

	while (*iterator != '\0')
	{
		iterator++;
	}

	while (iterator > s)
	{
		iterator--;
		putchar(*iterator);
	}

}

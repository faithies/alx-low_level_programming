#include "main.h"
#include <stdio.h>

/**
 * rev_string - function name
 * @s: function argument
 */

void rev_string(char *s)
{
	int length = 0;
	int back;
	int front;
	int index;
	char cup;

	for (index = 0; s[index] != '\0'; index++)
	{
		length = length + 1;
	}
	front = 0;
	back = length - 1;

	while (front < back)
	{
		cup = s[front];
		s[front] = s[back];
		s[back] = cup;
		front++;
		back--;
	}

}

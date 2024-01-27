#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - function that takes a character pointer as an argument
 * and returns a pointer to a function that takes two intergers as
 * its return type
 *
 * @s: a pointer to a character
 * Return: NULL if the corresponding cahracter wasn't found
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int iterator = 0;

	while (ops[iterator].op != NULL)
	{
		if (strcmp(ops[iterator].op, s) == 0)
		{
			return (ops[iterator].f);
		}

		iterator++;
	}
	return (NULL);
}

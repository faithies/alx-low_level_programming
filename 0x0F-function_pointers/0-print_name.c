#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name -  is function name that is designed to take a pointer to a
 * function (f) that accepts a char * as an argument and returns void.
 * its purpose is to print a name using the specified function
 *
 * @name: this is a pointer to character of strings to be printed out
 * @f: a pointer to a function
 *
 */

void print_name(char *name, void (*f)(char *))
{
	(f)(name);
}

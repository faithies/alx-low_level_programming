#include "lists.h"
#include <stdio.h>

/**
 * first - prints a sentence before the main
 * function is executed
 */
void first(void) __attribute__ ((constructor));


void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("i bore my house upon my back!\n");
}


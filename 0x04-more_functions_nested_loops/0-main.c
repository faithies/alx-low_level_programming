#include "main.h"
#include <stdio.h>

int _isupper(int c);

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	char c;
	c = 'T';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}

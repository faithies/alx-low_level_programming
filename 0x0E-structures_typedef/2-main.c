#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d);

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	struct dog my_dog;

	my_dog.name = NULL;
	my_dog.age = 3.5;
	my_dog.owner = NULL;
	print_dog(&my_dog);
	return (0);
}

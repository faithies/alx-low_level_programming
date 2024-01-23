#include <stdio.h>
#include "dog.h"

/**
 * init_dog - a function name that initialize a variable struct dog
 * @d: pointer to the memory address of struct
 * @name: pointer to an array of character that contains struct name
 * @age: parameter that holds the age assigned to the struct
 * @owner: argument that tells the owner of the define struct element
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;

}

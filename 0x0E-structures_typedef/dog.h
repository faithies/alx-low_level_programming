#ifndef DOG_H
#define DOG_H

/**
 * struct dog - declaration that defines a physically
 * grouped list of variables under one name in a block
 * of memory
 *
 * @name: pointer to characters in memory
 * @age: member of the struct that stores the age in memory
 * @owner: pointer to character in memory
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - void function
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog's owner
 * @d: pointer to struct dog
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}

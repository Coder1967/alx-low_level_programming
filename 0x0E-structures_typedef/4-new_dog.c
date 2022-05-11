#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - function to make new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of dog
 * Return: value
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p =  malloc(sizeof(dog_t));
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
	p->name = name;
	p->age = age;
	p->owner = owner;
	}
	return (p);
}

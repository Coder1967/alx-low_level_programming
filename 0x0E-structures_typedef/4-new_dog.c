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
	dog_t *ptr;

	ptr = (dog_t *) malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	}
	return (ptr);
}

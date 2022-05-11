#include <stdio.h>
#include "dog.h"
#include <math.h>
/**
 * print_dog - function that prints struct value
 * @d: a ponter of type struct containing the adress of a struct
 * Return: nothing(void)
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else if (isnan(d->age))
	{
		printf("Age: (nil)\n");
	}
	else if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}


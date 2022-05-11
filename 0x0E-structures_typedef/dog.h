#ifndef DOH_H
#define DOG_H
/**
 * struct dog - template for dogs
 * @name: name of dog
 * @age: age of dog
 * @owner of dog
 */
#define struct dog
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

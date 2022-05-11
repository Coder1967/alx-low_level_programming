#ifndef DOG_H
#define DOG_H
/**
 * struct dog - template for dogs
 * @name: name of dog
 * @age: age of dog
 * @owner: of dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

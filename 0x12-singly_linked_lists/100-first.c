#include <stdio.h>
/**
 * printer - function to print before main is called
 * Return: 0
 */
void __attribute__((constructor)) printer()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

#include <stdio.h>
/**
 * printer - function to print before main is called
 */
void __attribute__((constructor)) printer()
{
	printf("You're beat! and yet, you must allow,
			\nI bore my house upon my back!\n");
}

#include "function_pointers.h"
/**
 * print_name - function to print name
 * @name: var containing name
 * @f: address to function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if(f != NULL)
	{
		f(name);
	}
}

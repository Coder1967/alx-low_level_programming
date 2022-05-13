#include "function_pointers.h"
/**
 * print_name - function to print name
 * @name: var containing name
 * @f: address to function
 */
void print_name(char *name, void (*f)(char *))
{    
       	f(name); 
}	

#include <stdio.h>
#include <string.h>
/**
 * _strspn - function
 * @s: var1
 * @accept: var2
 * Return: str
 */
unsigned int _strspn(char *s, char *accept)
{
	int str = strspn(s, accept);

	return (str);
}

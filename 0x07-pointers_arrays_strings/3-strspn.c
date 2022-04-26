#include <stdio.h>
#include <string.h>
/**
 * _strspn - function
 * @s: var1
 * @accept: var2
 */
unsigned int _strspn(char *s, char *accept)
{
	char *str = strspn(s, accept);

	return (str);
}

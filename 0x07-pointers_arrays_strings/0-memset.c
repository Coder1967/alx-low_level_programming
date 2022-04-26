#include <stdio.h>
#include <string.h>
/**
 * _memset - function to carry task
 * @s: var to store string
 * @b: a char var
 * @n: a int var
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *s1 = memset(s,b,n);

	return (s1);
}


#include <stdio.h>
#include <string.h>
/**
 * _memcpy - function
 * @dest: var1
 * @src: var2
 * @n: var3
 * Return: s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *s = memcpy(dest, src, n);

	return (s);
}

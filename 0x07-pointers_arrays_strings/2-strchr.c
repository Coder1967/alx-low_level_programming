#include <stdio.h>
#include <string.h>
/**
 * _strchr - the function
 * @s: var1
 * @c: var2
 * Return: str
 */
char *_strchr(char *s, char c)
{
	char *str = strchr(s, c);

	return (str);
}

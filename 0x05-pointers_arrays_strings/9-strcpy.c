#include "main.h"
#include <stdio.h>
/**
 * _strcpy - function to copy a string
 * @dest: variable to receive string
 * @src: variable to be copied
 */
char *_strcpy(char *dest, char *src)
{
	char *ch = src;
	dest = ch;

	printf("%s\0", dest);
	return src;
}

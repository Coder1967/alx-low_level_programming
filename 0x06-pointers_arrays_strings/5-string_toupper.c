#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * string_toupper - function to upper
 * @str: variable
 * Return: value
 */
char *string_toupper(char *str)
{
	char sd[1000];
	int i;

	for (i = 0; i < strlen(str); i++)
	{
		sd[i] = toupper(str[i]);
	}

	strcpy(str,sd);
	return (str);
}


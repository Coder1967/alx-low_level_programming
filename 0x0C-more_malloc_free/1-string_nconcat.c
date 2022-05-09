#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - function
 * @s1: variable
 * @s2: var2
 * @n: var3
 * Return: result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int total = 0;
	int k = 0, y = 0, b = 0;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = strlen(s1);
	y = strlen(s2);
	total = (i + y) + 1;
	p = (char *) malloc(sizeof(char) * total);
	for (b = 0; b < i; b++)
	{
		p[b] = s1[b];
	}
	if ((int)n < y)
	{
	for (b = i; b <= ((int) n + i); b++)
	{
		p[b] = s2[k];
		k++;
	}
	}
	else
	{
		for (b = i; b <= y + i; b++)
		{
			p[b] = s2[k];
			k++;
		}
	}
	p[b - 1] = '\0';
	return (p);
}


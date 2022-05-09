#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - function
 * @s1: variable
 * @s2: var 2
 * Return: result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int total = 0;
	int b = 0;
	int i = 0;
	int k = 0;
	char *p;

	i = strlen(s1);
	total += i;
	b = strlen(s2);
	total += b + 1;
	p = (char *) malloc(sizeof(char) * total);
	if (p == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < i; b++)
	{
		p[b] = s1[b];
	}
	if (n < 12)
	{
	for (b = i; b <= ((int) n + i); b++)
	{
		p[b] = s2[k];
		k++;
	}
	}
	else
	{
		for (b = i; b <= 12 + i; b++)
		{
			p[b] = s1[k];
			k++;
		}
	}
	p[b - 1] = '\0';
	return (p);
}


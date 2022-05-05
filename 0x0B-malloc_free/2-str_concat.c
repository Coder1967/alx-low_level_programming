#include <stdlib.h>
/**
 * str_concat - function
 * @s1: variable 1
 * @s2: variable 2
 * Return: value
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr; int i = 0, k = 0, m, n, l, q = 0;


	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[k] != '\0')
	{
		k++;
	}
	l = k + i + 1;
	if (s1 != NULL && s2 != NULL)
	{
	ptr = (char *) calloc(l, sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < i; m++)
	{
		ptr[m] = s1[m];
	}
	for (n = m; n <= (i + k); n++)
	{
		ptr[n] = s2[q];
		q++;
	}
	}
	if (s1 == NULL || s2 == NULL)
	{
		if (s2 == NULL)
		{
			ptr = (char *) malloc(i * sizeof(char));
			if (ptr == NULL)
			{
				return NULL;
			}
			for (m = 0; m <= i; m++)
			{
				ptr[m] = s1[m];
			}
		}
		else if (s1 == NULL)
		{
			ptr = (char *) calloc(k, sizeof(char));
			if (ptr == NULL)
			{
				return NULL;
			}
			for (m = 0; m <= k; m++)
			{
				ptr[m] = s2[m];
			}
		}
	}


	
	return (ptr);
}

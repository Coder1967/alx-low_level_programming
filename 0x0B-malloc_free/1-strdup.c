#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function
 * @str: variable
 * Return: string copy
 */
char *_strdup(char *str)
{

		int k = 0, i = 1;

			char *ptr;
			if (str == NULL)
				return (NULL);
			
			while (str[i])
			{
				i++;
			}

			ptr = (char *) malloc((sizeof(char) * i) + 1);
			if (ptr == NULL)
				return (NULL);
			
			while (k < i)
			{
				ptr[k] = str[k];										k++;
			}
			ptr[k] = '\0';
			return (ptr);
}

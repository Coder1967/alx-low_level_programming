#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function
 * @str: variable
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
			if (s == NULL)
				return (NULL);
			
			while (k < i)
			{
				s[a] = str[a];										k++;
			}
			s[k] = '\0';
			return (s);
}

#include <stdio.h>
#include <string.h>
/**
 * leet - function
 * @s: variable
 * Return: value
 */
char *leet(char *s)
{
	int i = 0;
	char c;

	while (i < strlen(s))
	{
		if (s[i] == 'a' || s[i] == 65)
		{
			s[i] = '4';
		}
		else if (s[i] == 'e' || s[i] == 'E')
		{
			s[i] = '3';
		}
		else if (s[i] == 'o' || s[i] == 'O')
		{
			s[i] = '0';
		}
		else if (s[i] == 't' || s[i] == 'T')
		{
			s[i] = '7';
		}
		else if (s[i] == 'l' || s[i] == 'L')
		{
			s[i] = '1';
		}
		i++;
	}
	 return (s);
}	 

#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: string to search in
 * @accept: characters to locate
 *
 * Return: returns pointer
 */
char *_strpbrk(char *s, char *accept)
{
	char *temp = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
				return (s);
			accept++;
		}
		accept = temp;
		s++;
	}
	return (NULL);
}

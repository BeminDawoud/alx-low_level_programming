#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: string to search in
 * @accept: characters to locate
 * Return: returns pointer
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (*s == accept)
			return (s);
		s++;
	}
	if (*s == accept)
		return (s);
	return (NULL);
}

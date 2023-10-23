#include "main.h"
/**
 * _strstr - a function that searches a string for a substring.
 * @haystack: string to search in
 * @needle: string to locate
 *
 * Return: returns pointer
 */
char *_strstr(char *haystack, char *needle)
{
	char *temp = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack == *needle)
				return (haystack);
			needle++;
			haystack++;
		}
		needle = temp;
		haystack++;
	}
	return (NULL);
}

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
	char *temp1 = needle;
	char *temp2;

	for (; *haystack ; haystack++)
	{
		temp2 = haystack;

		while (*haystack == *needle && *needle != '\0')
		{
			needle++;
			haystack++;
		}
		if (*needle == '\0')
			return (temp2);
		else if (*needle != '\0')
		{
			needle = temp1;
			continue;
		}

	}
	return (NULL);
}

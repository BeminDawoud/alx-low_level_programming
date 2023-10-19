#include "main.h"
#include <string.h>
/**
 * _strncpy - a function that concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input digit
 * Return: A pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	dest = strncat(dest, src, n);
	return (dest);
}

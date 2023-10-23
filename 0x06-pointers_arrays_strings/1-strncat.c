#include "main.h"
#include <string.h>
/**
 * _strncat - a function that concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input digit
 * Return: A pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, i = 0;
	len = strlen(dest);
	while (src[i] && i <= n)
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return (dest);
}

#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - duplicate an array.
 * @str: string to copy.
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	int len = strlen(str);
	char *ptr = (char *)malloc(sizeof(char) * len);
	int i;

	if (str == NULL || ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = str[i];
	ptr[len] = '\0';
	return (ptr);
}

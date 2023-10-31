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
	int i;
	int len = 0;
	int j = 0;
	
	while (str)
	{
		len++;
		j++;
	}
	char *ptr = (char *)malloc(sizeof(char) * (len + 1));

	if (str == NULL || ptr == NULL)
		return (NULL);
	for (i = 0; i < (len + 1); i++)
		ptr[i] = str[i];
	ptr[len + 1] = '\0';
	return (ptr);
}
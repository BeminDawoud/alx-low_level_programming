#include "main.h"

/**
* strtow - dividing words
* @str: string
* Return: string or NULL
*/
char **strtow(char *str)
{
	char **ptr = &str;
	if (str == NULL || *str)
		return (NULL);
	return (ptr);
}

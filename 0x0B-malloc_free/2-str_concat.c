#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concat a string.
 * @s1: string.
 * @s2: string.
 * Return: pointer or NULL.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1 = 0, len2 = 0;
	char *ptr;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	ptr = (char *)malloc(sizeof(char) * (len1 + len2 - 1));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < len2; j++)
		ptr[i + j] = s2[j];

	ptr[i + j] = '\0';

	return (ptr);
}

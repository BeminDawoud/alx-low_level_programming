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
		s1 = NULL;

	if (s2 == NULL)
		s2 = NULL;

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	ptr = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < len2; j++)
		ptr[i + j] = s2[j];

	ptr[len1 + len2 + 1] = '\0';

	return (ptr);
}

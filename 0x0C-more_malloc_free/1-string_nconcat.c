#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concat a string.
 * @s1: string.
 * @s2: string.
 * @n: number of strings for s2.
 * Return: pointer or NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, len1 = 0, len2 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
		n = len2;
	ptr = (char *)malloc(sizeof(char) * (len1 + n + 1));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n; j++)
		ptr[i + j] = s2[j];

	ptr[i + j] = '\0';

	return (ptr);
}

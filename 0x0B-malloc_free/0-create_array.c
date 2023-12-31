#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array.
 * @size: size of the array.
 * @c: character.
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = (char *)malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0 || ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}

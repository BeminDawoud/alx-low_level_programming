#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates a block of memory
 * @nmemb: number of blocks.
 * @size: size of block.
 * Return: NULL or pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = calloc(nmemb, size);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}

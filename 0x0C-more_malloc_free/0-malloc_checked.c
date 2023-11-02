#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates a block of memory
 * @b: number of blocks
 * Return: 98 or pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}

#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocate a block of memory.
 * @ptr: pointer to old allocation.
 * @old_size: old size.
 * @new_size: new size.
 * Return: pointer or NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = realloc(ptr, new_size);
		return (ptr);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	ptr = realloc(ptr, new_size);
	return (ptr);

}

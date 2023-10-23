#include "main.h"
/**
 * _memcpy - a function that fills memory with constant bytes
 * @dest: location to fill
 * @src: location to copy
 * @n: number of bytes to fill
 * Return: returns pointer to location filled
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

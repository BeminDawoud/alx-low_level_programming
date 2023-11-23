#include "main.h"
/**
 * get_bit - function to print binary representation.
 * @n: number in decimal.
 * @index: the index.
 * Return: the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int index_max = sizeof(unsigned long int) * 8;

	if(index > index_max)
		return(-1);
	if (((n >> index) & 1) == 1)
		return (1);
	else
		return (0);
}

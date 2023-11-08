#include "function_pointers.h"
/**
*int_index -  a function that searches for an integer
*@array: array
*@size: array size
*@cmp: function pointer
*Return: Index or -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);
	if (cmp && array)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]))
				return (i);
		}
	}
	return (-1);
}

#include "function_pointers.h"
/**
*array_iterator - function to call a function
*@array: array
*@size: array size
*@action: function pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action && array)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}

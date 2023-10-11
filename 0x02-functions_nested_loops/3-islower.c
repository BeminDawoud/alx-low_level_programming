#include "main.h"
/**
 * _islower - Check Description
 * @c: parameter for function
 *
 * Description: function checks if c is a lowercase alphabet
 * Return: 0.
 */
int _islower(int c)
{
	if (c < 'a' || c > 'z')
	{
		return (0);
	}
	else
	{
	return (1);
	}
}

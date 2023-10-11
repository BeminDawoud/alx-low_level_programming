#include "main.h"
/**
 * int c - parameter
 * _islower - Check Description
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

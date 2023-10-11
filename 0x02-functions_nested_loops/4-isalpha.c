#include "main.h"
/**
 * _isalpha - Check Description
 * @c: parameter for function
 *
 * Description: function checks if c is a lowercase alphabet
 * Return: 0.
 */

int _isalpha(int c)
{
	if (c < 'a' || (c > 'z')
	{
		return (0);
	}
	else if (c < 'A' || c > 'Z')
	{
		return (0);
	}
	else
	{
		return (1);
	}

}

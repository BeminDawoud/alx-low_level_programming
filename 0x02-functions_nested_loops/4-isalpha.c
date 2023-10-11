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
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isletter = 1;
		}
	}
	return (isletter);
}

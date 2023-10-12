#include "main.h"
/**
 * _isdigit - check Description
 * @c: parameter
 * Description: checks uppercase letters
 *
 * Return: 0 on success
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

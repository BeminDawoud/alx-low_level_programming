#include "main.h"
/**
 * _isupper - check Description
 * @c: parameter
 * Description: checks uppercase letters 
 *
 * Return: 0 on success
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		printf("%c: %d\n", c, _isupper(c));
		return 1;
	}
	else
	{
		return 0;
		printf("%c: %d\n", c, _isupper(c));
	}
}

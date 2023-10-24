#include "main.h"

/**
 * rot13 - the function encodes a string.
 * @s: input string to encode
 * Return: encoded string
 */
char *rot13(char *s)
{
	char check[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char sub[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	char *start = s;

	for (; *s; s++)
	{
		for (; i < 53; i++)
		{
			if (*s == check[i])
				*s = sub[i];
		}
		i = 0;
	}
	s = start;
	return (s);
}

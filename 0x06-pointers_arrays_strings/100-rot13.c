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
		for (; check[i]; i++)
		{
			if (*s == check[i])
			{
				*s = sub[i];
				break;
			}
		}
		i = 0;
	}
	s = start;
	return (s);
}

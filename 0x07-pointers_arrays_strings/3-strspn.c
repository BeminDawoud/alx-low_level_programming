#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: an input string
 * @accept: an input character with to locate into string s
 * Return: returns pointer to c position
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	unsigned int i;
	unsigned int flag;
	unsigned int ans;
	char *temp = accept;

	while (*accept)
	{
		len++;
		accept++;
	}
	accept = temp;
	while (*s)
	{
		flag = 0;
		for (i = 0; i < len; i++)
		{
			if (*s == accept[i])
			{
				ans++;
				flag = 1;
				break;
			}
		}
		s++;
		if (flag == 0)
			break;
	}
	return (ans);
}

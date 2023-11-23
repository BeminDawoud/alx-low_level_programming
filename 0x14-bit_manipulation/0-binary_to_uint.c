#include "main.h"
/**
 * binary_to_uint - turn a string binary to an unsigned int decimal.
 * @b: string number.
 * Return: 0 or the number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, dec = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		dec = dec << 1;
		if (b[i] == '1')
			dec = dec ^ 1;
	}
	return (dec);
}

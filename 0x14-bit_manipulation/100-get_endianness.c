#include "main.h"
/**
 * get_endianness - check endianness.
 * Return:  1 or 0.
 */

int get_endianness(void)
{
	unsigned int num = 0;
	char *ptr = (char *)&num;

	if (*ptr)
		return (1);
	else
		return (0);
}

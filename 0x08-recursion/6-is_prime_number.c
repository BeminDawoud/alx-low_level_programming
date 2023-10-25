#include "main.h"
/**
 * _is_prime_number - function with recursion
 * @n: the square we need to find the root for.
 * Return: number
 */
int is_prime_number(int n)
{
	if ((n % 10 == 1 || n % 10 == 3 || n % 10 == 7 || n % 10 == 9) && (n > 9 && n % 3 != 0))
		return (1);
	else
		return (0);
}

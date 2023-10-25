#include "main.h"
/**
 * factorial - function with recursion
 * @n: Number to calculate factorial of.
 * Return: Void
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else if (n > 1)
		return (n * factorial(n - 1));
	else
		return (-1);
}

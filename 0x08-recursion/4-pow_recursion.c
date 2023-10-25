#include "main.h"
/**
 * _pow_recursion - function with recursion
 * @x: Number to raise it's power.
 * @y: number to be raised by.
 * Return: Void
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x * _pow_recursion(x, (y - 1)));
	else if (y == 0)
		return (1);
	else
		return (-1);
}

#include "main.h"
/**
 * square_root - function with recursion
 * @guess: Guess number and we start it by one.
 * @num: the square we need to find the root for.
 * Return: number
 */
int square_root(int guess, int num)
{
	if (guess > num)
		return (-1);
	else if (guess * guess == num)
		return (guess);
	return (square_root((guess + 1), num));
}
/**
 * _sqrt_recursion - function with recursion
 * @n: the square we need to find the root for.
 * Return: number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square_root(1, n));
}

#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the program
 *
 * Description: this prints whether the number is negative or positive
 *
 * Return: 0 on success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n < 0)
	{
		printf("%d is negative", n);
	}
	else
	{
		printf("%d is zero");
	}
	return (0);
}
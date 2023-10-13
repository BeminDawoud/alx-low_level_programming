#include <stdio.h>

/**
 * main - Description
 * Description: fizz buzz
 * Return: 0 on success
*/
int main(void)
{
	int i;

	printf("%d", 1);
	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && !((i % 5) == 0))
			printf(" Fizz");
		else if ((i % 5) == 0 && !((i % 3) == 0))
			printf(" Buzz");
		else if ((i % 3) == 0 && (i % 5) == 0)
			printf(" FizzBuzz");
		else
			printf(" %d", i);
	}
	putchar('\n');
	return (0);
}

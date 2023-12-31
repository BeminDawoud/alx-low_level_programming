#include "main.h"
#include <stdlib.h>
/**
* main - change in smallest coins
* @argc: count of args
* @argv: array of strings
* Return: 0 or 1
*/
int main(int argc, char *argv[])
{
	int i = 0;
	int count = 0;
	int change;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	if (change < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (change > 0)
	{
		if (change >= coins[i])
		{
			count += change / coins[i];
			change = change % coins[i];
		}
		else
			i++;
	}
	printf("%d\n", count);
	return (0);
}

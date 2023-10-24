#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - generating a random password
 * Description: description
 * Return: nothing for success
*/

int main(void)
{
	char password[15];
	char lower[] = "abcdefghijklmnopqrstuvwxyz";
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char symbol[] = "!@#$^&*(_)@$&!";
	char digits[] = "123456789";
	int len1 = strlen(lower) - 1;
	int len2 = strlen(upper) - 1;
	int len3 = strlen(symbol) - 1;
	int len4 = strlen(digits) - 1;
	int i;

	srand(time(NULL));
	for (i = 0; i < 15; i++)
	{
		int choice = rand() % 4;

		if (choice == 0)
			password[i] = lower[rand() % len1];
		else if (choice == 1)
			password[i] = upper[rand() % len2];
		else if (choice == 2)
			password[i] = symbol[rand() % len3];
		else
			password[i] = digits[rand() % len4];
	}

	password[15] = '\0';
	printf("%s\n", password);
	return (0);
}

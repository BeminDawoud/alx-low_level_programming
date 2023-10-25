/**
* check_palindrome - check if palindrome.
* @s: string
* @i: number to start iteration from "0".
* @len: length of string
* Return: 1 or 0
*/

int check_palindrome(int i, int len, char *s)
{
	if (i >= len)
		return (1);
	else if (s[i] == s[len])
	{
		i++;
		len--;
		return (check_palindrome(i, len, s));
	}
	else
	return (0);
}

/**
 * is_palindrome - check if palindrome
 * @s: string
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int len = strlen(s) - 1;
	int i = 0;

	return (check_palindrome(i, len, s));
}

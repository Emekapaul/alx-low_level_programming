#include "main.h"

int check_pal(char *sl, int j, int len);
int _strlen_recursion(char *sl);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: This is the string that reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @sl: This string will calculate length
 *
 * Return: length of the string
 */
int _strlen_recursion(char *sl)
{
	if (*sl == '\0')
		return (0);
	return (1 + _strlen_recursion(sl + 1));
}

/**
 *check_pal - checks the characters recursively for palindrome
 *@sl: The parameter that the string will be checked
 *@j: The parameter that will iterate
 *@len: This is the length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *sl, int j, int len)
{
	if (*(sl + j) != *(sl + len - 1))
		return (0);

	if (j >= len)
		return (1);

	return (check_pal(sl, j + 1, len - 1));
}

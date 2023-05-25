#include "main.h"

/**
 * _isalpha - main entry point
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, 0.
 */
int _isalpha(int c)
{
	int one = 1;
	int zero = 0;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (one);
	}

	else
	{
		return (zero);
	}
}

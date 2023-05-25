#include "main.h"

/**
 * _islower - main entry point
 *@c: The character to print
 *
 * Return: On success 1.
 * 0n error, 0
 */
int _islower(int c)
{
	int one = 1;
	int zero = 0;

	if (c >= 'a' && c <= 'z')
	{
		return (one);
	}
	else
	{
		return (zero);
	}
}

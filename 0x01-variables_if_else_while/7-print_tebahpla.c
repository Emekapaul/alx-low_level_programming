#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char lr = 'z';

	while (lr >= 'a')
	{
		putchar(lr);
		lr--;
	}
	putchar('\n');
	return (0);
}

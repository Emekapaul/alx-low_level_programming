#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char sl = 'a';

	while (sl <= 'z')
	{
	if (sl != 'e' && sl != 'q')
	{
		putchar(sl);
	}
		sl++;
	}
		putchar('\n');
		return (0);
}

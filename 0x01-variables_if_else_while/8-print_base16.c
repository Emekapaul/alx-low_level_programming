#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char hexNum = 0;
	char hexLet = 'a';

	while (hexNum <= 9)
	{
		putchar(hexNum + '0');
		hexNum++;
	}
	while (hexLet <= 'f')
	{
		putchar(hexLet);
		hexLet++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (successs)
 */
int main(void)
{
	int num = 1;

	while (num <= 9)
	{
		putchar(num + '0');
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (successs)
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		num++;

		if (num != 10)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

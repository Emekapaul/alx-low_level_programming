#include <stdio.h>

/**
  *main - Entry point
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	int lc = 48;

	while (lc <= 57)
	{
		putchar(lc);

		if (lc != 57)
		{
			putchar(',');
			putchar(' ');
		}
		lc++;
	}
	putchar('\n');
	return (0);
}

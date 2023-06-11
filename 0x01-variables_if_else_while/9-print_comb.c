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
		if (lc != 57)
		{
			putchar(lc);
			putchar(',');
			putchar(' ');
			lc++;
		}

		else
		{
			putchar(lc);
			lc++;
		}
	}
	return (0);
}

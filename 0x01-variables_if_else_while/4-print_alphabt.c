#include <stdio.h>

/**
  *main - Entry point
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	char lc = 'a';

	while (lc <= 'z')
	{
		if (lc == 'e' || lc == 'q')
		{
			lc++;
		}

		else
		{
			putchar(lc);
			lc++;
		}
	}
	putchar('\n');
	return (0);
}

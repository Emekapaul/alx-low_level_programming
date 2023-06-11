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
		putchar(lc);
		lc++;
	}
	putchar('\n');
	return (0);
}

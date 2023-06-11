#include <stdio.h>

/**
  *main - Entry point
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	char lc = 'z';

	while (lc >= 'a')
	{
		putchar(lc);
		lc--;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
  *main - Entry point
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	char lc = 'a';
	char uc = 'A';

	while (lc <= 'z')
	{
		putchar(lc);
		lc++;
	}

	while (uc <= 'Z')
	{
		putchar(uc);
		uc++;
	}

	putchar('\n');
	return (0);
}

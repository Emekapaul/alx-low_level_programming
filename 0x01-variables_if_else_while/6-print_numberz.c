#include <stdio.h>

/**
  *main - Entry point
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	int sd = 48;

	while (sd <= 57)
	{
		putchar(sd);
		sd++;
	}
	putchar('\n');
	return (0);
}

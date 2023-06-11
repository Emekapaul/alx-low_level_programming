#include <stdio.h>

/**
  *main - Entry point
  *
  *Return: Always 0 (success)
  */
int main(void)
{
	int hexNum = 48;
	int hexLet = 97;

	while (hexNum <= 57)
	{
		putchar(hexNum);
		hexNum++;
	}

	while (hexLet <= 102)
	{
		putchar(hexLet);
		hexLet++;
	}
	putchar('\n');
	return (0);
}

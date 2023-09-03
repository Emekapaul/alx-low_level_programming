#include <stdio.h>
#include <stdlib.h>

/**
  *main - Write a program that multiplies two numbers.
  *@argc: Argument count
  *@argv: The numbers to multiply(Argument vector)
  *Return: 0.
  */
int main(int argc, char *argv[])
{
	int i, ans = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			ans *= atoi(argv[i]);
		}

		printf("%d\n", ans);
	}

	else
	{
		printf("Error\n");

		return (1);
	}

	return (0);
}

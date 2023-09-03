#include <stdio.h>
#include <stdlib.h>

/**
  *main - Write a program that adds positive numbers.
  *@argc: Argument count
  *@argv: The strings to multiply and print (Argument vector)
  *Return: 0
  */
int main(int argc, char *argv[])
{
	int i, ans = 0;

	if (argc == 1)
	{
		printf("0\n");
	}

	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			ans += atoi(argv[i]);

			if (argv[i][0] <= 'z' && argv[i][0] >= 'a')
			{
				printf("Error\n");

				return (1);
			}

		}

		printf("%d\n", ans);
	}

	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  *main - Write a program that adds positive numbers.
  *@argc: Argument count
  *@argv: The strings to multiply and print (Argument vector)
  *Return: 0
  */
int main(int argc, char *argv[])
{
	int i, ans = 0, j;

	if (argc == 1)
	{
		printf("0\n");
	}

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			j = 0;

			while (argv[i][j] != '\0')
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");

					return (1);
				}
			j++;
			}
			 ans += atoi(argv[i]);
		}

		printf("%d\n", ans);
	}

	return (0);
}

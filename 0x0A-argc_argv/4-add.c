#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  *main - Entry point
  *@argc: Argument count
  *@argv: String argument
  *
  *Return: Always 0 (success)
  */
int main(int argc, char *argv[])
{
	int i = 1;
	int res = 0;

	if (argc > 1)
	{
		while (i < argc)
		{
			if (isdigit(*argv[i]))
			{
				res += atoi(argv[i]);
			}

			else
			{
				printf("Error\n");
				return (1);
			}
		i++;
		}

		printf("%d\n", res);
	}

	else
	{
		printf("0\n");
	}

	return (0);
}

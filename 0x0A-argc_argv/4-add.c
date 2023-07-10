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
	int j;

	if (argc > 1)
	{
		while (i < argc)
		{
			char *arg = argv[i];
			j = 0;
			while (arg[j] != '\0')
			{
				if (!isdigit(arg[j]))
				{
					printf("Error\n");
					return (1);
				}
			j++;
			}
		res += atoi(arg);
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

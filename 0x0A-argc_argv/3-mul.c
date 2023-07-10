#include <stdio.h>
#include <stdlib.h>

/**
  *main - Entry point
  *@argc: Argument count
  *@argc: Strings argument.
  *
  *Return: Always 0 (Success)
  */
int main(int argc, char *argv[])
{
	int i = 1;
	int res = 1;

	if (argc >= 2)
	{
		while (i < argc)
		{
			res *= atoi(argv[i]);
			i++;
		}

		printf("%d\n", res);
	}

	else
	{
		printf("Error\n");
	}

	return (1);
}

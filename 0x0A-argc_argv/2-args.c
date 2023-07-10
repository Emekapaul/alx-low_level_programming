#include <stdio.h>

/**
  *main - Entry point
  *@argc: Number of arguments
  *@argv: String arguments
  *
  *Return: Always 0 (Success)
  */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}

#include <stdio.h>

/**
  *main - Entry point
  *@argv: number of arguments
  *@argc: Strings arguments
  *
  *Return: Always 0 (Success)
  */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}

#include <stdio.h>

/**
  *main - Entry point
  *
  *Return: Always 0 (success)
  */
int main(void)
{
	int sd = 0;

	while (sd <= 9)
	{
		printf("%d", sd);
		sd++;
	}
	printf("\n");
	return (0);
}

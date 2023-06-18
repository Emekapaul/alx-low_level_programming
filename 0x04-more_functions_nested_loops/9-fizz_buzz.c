#include <stdio.h>

/**
  *main - Entry point
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz ");
			i++;
		}

		else if ((i % 3) == 0)
		{
			printf("Fizz ");
			i++;
		}

		else if ((i % 5) == 0)
		{
			printf("Buzz ");
			i++;
		}

		else
		{
			printf("%d ", i);
			i++;
		}
	}
	printf("\n");
	return (0);
}
